#ifndef JOGADOR_H
#define JOGADOR_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Tabuleiro.h"
#include "Peca.h"

class Jogador
{
private:
	Tabuleiro tabuleiro;
	Peca pecas[16];
public:
	char Nome[10];

	byte Cor;
public:
	void Jogada();
	void SetNome(char nome[10]);
	void InicializaPecas();
};
#endif
