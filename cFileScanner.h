/*
 * ScanningEngine.h
 *
 *  Created on: Apr 21, 2014
 *      Author: Ahmed Fouda
 */

#ifndef SCANNINGENGINE_H_
#define SCANNINGENGINE_H_

class cFileScanner
{
	virtual int init() = 0;
	virtual int scan() = 0;

};

class cFile2scan
{
	//Extract the needed information from the file so scanners can use this info
public:
	//constructors
	cFile2scan();
	//variables
	char* path;
	char* magic;
	//... other info needed

};

#endif /* SCANNINGENGINE_H_ */
