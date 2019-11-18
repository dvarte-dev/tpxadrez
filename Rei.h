#ifndef REI_H
#define REI_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Peca.h"

class Rei : public Peca
{
public:
	void Movimento();

	void ConferirCheck();

	void Desistir();

};
#endif
