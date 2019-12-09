/*
 * Save.h
 *
 *  Created on: 18 de ago de 2019
 *      Author: egidio
 */

#ifndef SAVE_H_
#define SAVE_H_

#include <iostream>
#include <string.h>
#include <sstream>
#include <fstream>

class Save {
	char *data = new char[500];
public:
	Save();

	void recoverFile();
	void SaveFile();

	char* getData();


	virtual ~Save();
};

#endif /* SAVE_H_ */
