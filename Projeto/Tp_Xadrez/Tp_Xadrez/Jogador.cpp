#include "pch.h"
#include "Jogador.h"
#include "Peao.h"

#include <string>
#define NUMCOL 8
using namespace std;

Jogador::Jogador()
{
	cout<<"Digite o seu nome\n";
		cin >> this->Nome;
	cout << "Escolha a sua cor\n";
		cin >> this->Input;
		
		if (Input == "Branco" || Input == "branco")
			this->Cor = false;
		else if (Input == "Preto" || Input == "preto")
			this->Cor = true;
		else
		{
			//Lancar exceçao
		}

	InicializaPecas();
}


Jogador::~Jogador()
{
	DestroiPecas();
}

void Jogador::Jogada()
{

}
void Jogador::SetNome(std::string nome)
{
	
}
void Jogador::InicializaPecas()
{	
	MinhasPecas = new Pecas*[16];
	//Caso o jogador seja da cor Preta;
	if (this->Cor)
	{
		//Cria os peoes pretos
		for (int i = 0; i < NUMCOL; i++)
		{
			int* EssaPos = new int[2]{ 1,i };
			MinhasPecas[i] = new Peao(EssaPos);
		}
	}
	//Caso o jogador seja da cor branca
	else
	{
		//Cria os peoes brancos
		for (int i = 0; i < NUMCOL; i++)
		{
			int* EssaPos = new int[2]{ 6,i };
			MinhasPecas[i] = new Peao(EssaPos);
		}
	}
}

void Jogador::DestroiPecas()
{
	for (int i = 0; i < NumPecas; i++)
	{
		delete MinhasPecas[i];
	}
	delete[] MinhasPecas;
}

