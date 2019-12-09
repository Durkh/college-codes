/*
 * Save.cpp
 *
 *  Created on: 18 de ago de 2019
 *      Author: egidio
 */

#include "Save.h"

Save::Save() {
	// TODO Auto-generated constructor stub

}

void Save::recoverFile() {
	std::ifstream file;
	char buffer[500];

	file.open("teste.txt");

	if(!file.is_open()){
		return;
	}

	while(true){
		file.getline(buffer, 200);

		for(int i=0; ; i++){
			if(buffer[i+1]== '\0'){
				buffer[i+1] = '\n';
				buffer[i+2] = '\0';
				break;
			}
		}

		strcat(this->data, buffer);
		if (file.bad() | file.eof() | file.fail() )
		  break;
	}

	file.close();

	return;
}

void Save::SaveFile() {
	std::ofstream file;

	file.open("teste_bkp.txt");

	if(!file.is_open()){
		return;
	}

	for(int i=0; this->data[i] != '\0'; i++){
		file << data[i];
	}

	file.close();
}

char* Save::getData() {
	return this->data;
}

Save::~Save() {
	delete data;
}

