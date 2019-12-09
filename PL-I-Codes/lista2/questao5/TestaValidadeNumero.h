/*
 * TestaValidadeNumero.h
 *
 *  Created on: 18 de ago de 2019
 *      Author: egidio
 */

#ifndef TESTAVALIDADENUMERO_H_
#define TESTAVALIDADENUMERO_H_

#include <iostream>
#include "MyExceptions.h"

class TestaValidadeNumero {
public:
	TestaValidadeNumero();

	static void validaNumero(int num);

	virtual ~TestaValidadeNumero();
};

#endif /* TESTAVALIDADENUMERO_H_ */
