/* diskerr.c - Just make it so dos don't put up that abort/retry/fail
   message on my pretty screen.  Automatically fail.  I'll cope
   elsewhere from there.  Actually this is about the only Turbo C specific
   library routine I'm using.  Still yet another good reason not
   to switch to Microsoft! */

/*
  Comment by Pelle 2025-03-14:
  It seems like the _harderr function in Microsoft C does
  the same thing as the Turbo C harderr function?
  Not sure if the (unsigned) errcode is identical to
  the (int) errval, but this seems to work.
 */

#include "jimk.h"

int crit_errval;

#ifdef TURBOC

static
de_handler(errval, ax, bp, si)
int errval, ax, bp, si;
{
crit_errval = errval;
return(0);		/* Give up DOS, but please don't abort me... */
}

/* Have TurboC library deal with telling DOS what to do with it's
   critical disk error handler. */
init_de()
{
harderr(de_handler);
}

#else

handler(unsigned deverror, unsigned errcode, unsigned far *devhdr)
{
  crit_errval = (errcode & 0xff);
  _hardretn();
}

init_de()
{
  _harderr(handler);
}

#endif
