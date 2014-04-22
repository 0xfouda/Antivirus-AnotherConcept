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
	cResult* scan(char* FilePath); //returns cResult of one file
	cResult** scan(char* FilePathQueue[]); // returns cResult pointer to an cResult array of files in FilePathQueue
};

//scanner result

class cResult
{
public:
	bool virus;
	char* VirusName;
	char* Detectors[];

};



#endif /* CSCANNINGENGINE_H_ */
