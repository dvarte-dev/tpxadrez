#ifndef PECA_H
#define PECA_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Jogador.h"

class Peca
{
private:
	Jogador jogador;
public:
	int Casa[2];
public:
	virtual void Movimento();
	void SetJogador(Jogador Qual);
};
#endif
