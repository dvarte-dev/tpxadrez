#pragma once
#include "Pecas.h"
#include "Jogador.h"

class Tabuleiro
{
private:

	Jogador* Jogador1;
	Jogador* Jogador2;

	char** Casas;

	int TamanhoLinhas;
	int TamanhoColunas;

public:
	Tabuleiro();
	~Tabuleiro();

	

	bool Turno;

	void HabilitarTurno();
	bool ConferirJogada(Pecas qual);
	void Vencedor(Jogador quem);
	void InicializarJogo();
};

