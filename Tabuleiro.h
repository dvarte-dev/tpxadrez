#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Jogador.h"
#include "Interface.h"
#include "Peca.h"

class Tabuleiro
{
private:
	byte Casas[8][8];

	Jogador Jogador1;

	Jogador Jogador2;

	Interface interface;
public:
	byte Turno;


public:
	void HabilitarTurno();

	boolean ConferirJogada(Peca Qual);

	void Vencedor();

	void InicializarJogo();

};
#endif
