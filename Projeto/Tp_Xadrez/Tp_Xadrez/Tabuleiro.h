#pragma once
#include "Pecas.h"
#include "Jogador.h"

class Tabuleiro
{
private:

	Jogador* Jogador1;
	Jogador* Jogador2;

	char** Casas;

	int TamanhoLinhas = 8;
	int TamanhoColunas = 8;
	void AtualizaPeca(int Qual, int Quantas);

public:
	Tabuleiro();
	~Tabuleiro();

	void AtualizarTela();
	bool Turno;
	void HabilitarTurno();
	bool ConferirJogada(Pecas qual);
	void Vencedor(Jogador quem);
	void InicializarJogo();
	void Resetar();


};

