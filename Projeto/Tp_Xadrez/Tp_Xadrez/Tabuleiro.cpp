#include "pch.h"
#include "Tabuleiro.h"
#include <iostream>
#include "Pecas.h"
#include "Peao.h"
#define NUMTIPOS 6
#define PEOES 0
#define CAVALOS 1
#define BISPOS 2
#define TORRES 3
#define RAINHA 4
#define REI 5
using namespace std;

Tabuleiro::Tabuleiro()
{

}


Tabuleiro::~Tabuleiro()
{
	Resetar();
}

void Tabuleiro::Vencedor(Jogador qual)
{
	cout << "O jogador "<<qual.Nome<<" venceu!";
}
void Tabuleiro::HabilitarTurno()
{
	if (Turno)
		Turno = false;
	else
		Turno = true;
}

bool Tabuleiro::ConferirJogada(Pecas Qual)
{
	return false;
}

void Tabuleiro::Resetar()
{
	for (int i = 0; i < TamanhoLinhas; i++)
	{
		if(Casas[i] != nullptr)
		delete [] Casas[i];
	}
	delete[] Casas;
}

void Tabuleiro::InicializarJogo()
{
	delete Jogador1;
	delete Jogador2;

	cout << "Jogador1 ";
	Jogador1 = new Jogador();
	cout << "Jogador2 ";
	Jogador2 = new Jogador();

	Casas = new char*[TamanhoLinhas];
	for (int i = 0; i < TamanhoLinhas; i++)
	{
		Casas[i] = new char[TamanhoColunas];
	}

	for (int i = 0; i < TamanhoLinhas; i++)
	{
		for (int j = 0; j < TamanhoColunas; j++)
		{
			Casas[i][j] = '0';
			cout << Casas[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
}

void Tabuleiro::AtualizarTela()
{
	AtualizaPeca(PEOES, 8);
	AtualizaPeca(CAVALOS, 2);
	AtualizaPeca(BISPOS, 2);
	AtualizaPeca(TORRES, 2);
	AtualizaPeca(RAINHA, 1);
	AtualizaPeca(REI, 1);

	for (int i = 0; i < TamanhoLinhas; i++)
	{
		for (int j = 0; j < TamanhoColunas; j++)
		{
			cout << Casas[i][j] << " ";
		}
		cout << endl;
	}
}

void Tabuleiro::AtualizaPeca(int Qual, int Quantos)
{
	for (int j = 0; j < Quantos; j++)
	{
		int* CurrentPos = Jogador1->MinhasPecas[Qual][j].GetPos();
		if (Jogador1->MinhasPecas[Qual][j].GetMorto())
		{
			Casas[CurrentPos[0]][CurrentPos[1]] = Jogador1->MinhasPecas[Qual][j].GetId();
		}

		if (Jogador2->MinhasPecas[Qual][j].GetMorto())
		{
			CurrentPos = Jogador2->MinhasPecas[Qual][j].GetPos();
			Casas[CurrentPos[0]][CurrentPos[1]] = Jogador2->MinhasPecas[Qual][j].GetId();
		}
	}
}