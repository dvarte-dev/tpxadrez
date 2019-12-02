#include "pch.h"
#include "Tabuleiro.h"
#include <iostream>
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
			cout << Casas[i][j] << " ";
		}
		cout << endl;
	}
}