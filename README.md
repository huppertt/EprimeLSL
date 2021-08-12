# EprimeLSL
DLL drivers for controlling LabStreaming Layer from inside Eprime

The contents of the Eprime Package need to be placed in the packages folder for Eprime (usually %USER_HOME/My Documents/My Experiments/Packages).  This package will take care of the LSL stream initialization and closing and exposes a method called MarkEvent that puts the LSL marks.  By default, the name of the LSL thread is "EprimeLSL" but can be changed in the package file.  You need to copy the EprimeLSLStimulus.dll and lsl.dll files to the study folder with your Eprime script file.  I have a 32 and 64bit version of these in the precompiled folder and you need the one that matches your Eprime.  (e.g. my Eprime was 32bit but running on 64bit Windows  ¯\_(ツ)_/¯ and so I need to use the 32bit dll's for Eprime).  I only have Eprime2, but the same DLL should work for EP3 as well.

Note-  The LSL thread is created only once Eprime starts (e.g. after you enter the subject ID etc).  If you are using a NIRx system, you need to start Eprime first to get past the subject registration (usually I would put a "Press anykey to start experiment" slide) and then start the NIRx.  Otherwise, the NIRx won't find the LSL thread because it only looks for it just before it starts collection.

Note- The Eprime2 example calls the package, so you need to put the package in the folder as above.  Packages are added under the "Experiments" pulldown in Eprime and you may need to reload the first time so that eprime recognizes the package

The C++ source code for the DLL is included.  I did this on VS2019.  
