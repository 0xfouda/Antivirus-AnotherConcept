/*
 * cScanningEngine.h
 *
 *  Created on: Apr 21, 2014
 *      Author: Ahmed Fouda
 */
#include <string>
#include "cFileScanner.h"

#ifndef CSCANNINGENGINE_H_
#define CSCANNINGENGINE_H_

class cScanningEngine
{

public:
	//constructors
	cScanningEngine();
	cScanningEngine(char* FilePath);
	cScanningEngine(char* Buffer, int Size);
	//public variables

	//public functions
	int init(); //initiate scanners array
	cScanningResult* scan(cFile2scan file); //returns ScanningResult of one file
};

//scanner result

class cScanningResult
{
public:
	bool virus;
	char* VirusName;
	char* Detectors[];

};



#endif /* CSCANNINGENGINE_H_ */
