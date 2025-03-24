Animator Pro A.K.A.
===================

Animator Pro, (A.K.A. Autodesk Animator Pro, Ani Pro, PJ Paint, or simply PJ) 
is a 256 color paint and animation package for MSDOS. It was popular 
in the early to mid 1990's for game art, online animation, 
business presentations and occasional TV productions.

Originally released in 1989 by Autodesk, and licensed from Yost Group, Ani Pro 
was created by Peter Kennard, Gary Yost and Jim Kent. Jim Kent kept copyrights 
to the source code, thus allowing him to grant me permission to make it 
available to you here. For my part, I wish to do my best to preserve and 
document this tiny bit of significant computer history, promote the usefulness 
of this program and hopefully improve and modify it for future and current 
users, many of whom still find it very useful and fun.

This Branch Demonstrates How To Build Using Tools from MS-DOS Repo
------------------------------------------------------------------
This branch modifies an older version (commit
f5ed37135ad1f3e2788a43a25774eb46b2c0cc9a) of the Animator Pro A.K.A. repo just
to show how the pristine Animator can be built using the tools included in
Microsoft's MIT-licensed MS-DOS repo.

YOU PROBABLY DO NOT WANT TO USE THIS VERSION! THIS IS FOR DEVELOPERS THAT WANT
TO SEE HOW TO BUILD THE 16-BIT VERSION OF ANIMATOR USING A FREE COMPILER. THERE
IS NO REASON TO USE THIS INSTEAD OF THE VERSION THAT CAN BE DOWNLOADED AT
https://github.com/AnimatorPro/Animator-Pro/tree/f5ed3/bin/dos/v.

Building is done in DOS. DOSBox seems to work fine (e.g. https://dosbox-x.com/).

Clone the MS-DOS repo from https://github.com/microsoft/MS-DOS. Tested
with the current HEAD that is at 2d04cacc5322951f187bb17e017c12920ac8ebe2.
The only files needed are in the v4.0/src/TOOLS subdirectory
(https://github.com/microsoft/MS-DOS/tree/main/v4.0/src/TOOLS).

Copy Pristine/V (from this repository) and TOOLS (from the MS-DOS
repository) somewhere together on a disk that you can access
from DOS (e.g. somewhere that you mount as C: in DOSBox).
Or just copy TOOLS into the Pristine directory and mount
that in DOSBox (see example below).

There is a MSBUILD.BAT script in Pristine\V. It assumes that
the TOOLS are available in the parent directory (e.g. it
adds ..\TOOLS to path). That is why TOOLS and V need to
be in the same location.

How to build: Start DOS, cd to the V directory, and run
MSBUILD.BAT. This might work:
    dosbox-x -c "mount e: Pristine" -c "e:" -c "cd v" -c "msbuild.bat"

(It should also work to compile using other emulators or a
real hardware PC running FreeDOS or MS-DOS.)

This should create the V.EXE file that is all that is needed
to run Animator. Assuming everything works as intended.

There are many ugly compiler warnings because MSC does not like
text after endif. It is easy to fix, but ignored for now to
keep the diff smaller here.

---

This project is not endorsed by Autodesk, Inc., 
Autodesk is a trademark of Autodesk, Inc.,

However, interestingly, Autodesk, Inc's tradmarks on "Autodesk Animator" 
and "Animator Pro" are expired. 

All source code  (unless otherwise marked, or if better information 
becomes available) is ©1989-1994 Jim Kent and is available here under 
the BSD license, reproduced below:

Copyright (c) 1989-1994, Jim Kent All rights reserved.
 
Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

 * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
 * Neither the name Animator Pro nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission. 

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
