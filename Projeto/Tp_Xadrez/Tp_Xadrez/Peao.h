#pragma once
#include "Pecas.h"

class Peao:public Pecas
{
public:
	Peao();
	Peao(int * Pos);
	~Peao();

	bool PrimeiroMovimento = true;
};

