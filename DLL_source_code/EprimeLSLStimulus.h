#ifndef EPRIMELSLSTIMULUS_H
#define EPRIMELSLSTIMULUS_H
#pragma once


extern "C" LONG WINAPI LSLinit(char* threadname);
extern "C" LONG WINAPI LSLmarker(const INT32 marker);
extern "C" LONG WINAPI LSLclose();

#endif EPRIMELSLSTIMULUS_H