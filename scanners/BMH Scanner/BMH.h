/*
 * BMH.h
 *
 *  Created on: Apr 21, 2014
 *      Author: Ahmed Fouda
 */

#ifndef BMH_H_
#define BMH_H_

#include "ScanningEngine.h"
#define MAX_ALPHABET 256
class BMH : public FileScanner
{
protected:
	unsigned char BadMatchTable[ MAX_ALPHABET ];
	void create_BadMatchTable(char* pattern, int pattern_size);
public:
	char* pattern;
	char* text;
	int pattern_size;
	int text_size;
	BMH();
	BMH(char* pattern, int pattern_size, char* text, int text_size);
	int search();
	int search(char* pattern, int pattern_size, char* text, int text_size);

};





#endif /* BMH_H_ */
