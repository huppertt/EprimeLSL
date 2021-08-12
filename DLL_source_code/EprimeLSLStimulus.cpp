// MathLibrary.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <stdio.h>
#include <stdlib.h>
#include "EprimeLSLStimulus.h"
#include "lsl_cpp.h"
#include <string>

using namespace lsl;

// DLL internal state variables:
static lsl_streaminfo info;
static lsl_outlet outlet;
 


extern "C" LONG WINAPI LSLinit(char* threadname){
	info=lsl_create_streaminfo(threadname, "Markers", 1, IRREGULAR_RATE,  cft_int32, "id123456");
	outlet = lsl_create_outlet(info,0,360);
	return 1;
}

extern "C" LONG WINAPI LSLclose() {
	
	lsl_destroy_outlet(outlet);
	lsl_destroy_streaminfo(info);
	return 0;
}

extern "C" LONG WINAPI LSLmarker(const INT32 marker) {
	lsl_push_sample_i(outlet,&marker);
		//_str(outlet, &marker);
	return 1;
}
