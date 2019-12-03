#include "pch.h"
#include "Jogador.h"
#include "Peao.h"
#include "Cavalo.h"
#include "Bispo.h"
#include "Torre.h"
#include "Rainha.h"
#include "Rei.h"

#include <string>
#define NUMCOL 8
#define NUMPECAS 16
#define NUMTIPOS 6

#define PEOES 0
#define CAVALOS 1
#define BISPOS 2
#define TORRES 3
#define RAINHA 4
#define REI 5

using namespace std;

Jogador::Jogador()
{
	cout<<"Digite o seu nome\n";
		cin >> this->Nome;
	cout << "Escolha a sua cor\n";
		cin >> this->Input;
		
		try 
		{
			if (!TestarCor())
			throw(exception());
		}
		
		catch (exception erro)
		{
			while (!TestarCor())
			{
				cout << "Insira uma cor válida, Branco ou Preto" << endl;
				cin >> this->Input;
			}
		}
		this->InicializaPecas();
}

 bool Jogador::TestarCor()
{
	 if (this->Input == "Branco" || this->Input == "branco")
	 {
		 this->Cor = false;
		 return true;
	 }
	 else if (this->Input == "Preto" || this->Input == "preto")
	 {
		 this->Cor = true;
		 return true;
	 }
	 return false;
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
	MinhasPecas = new Pecas*[NUMTIPOS];
	MinhasPecas[PEOES] = new Peao[8];
	MinhasPecas[CAVALOS] = new Cavalo[2];
	MinhasPecas[BISPOS] = new Bispo[2];
	MinhasPecas[TORRES] = new Torre[2];
	MinhasPecas[RAINHA] = new Rainha[1];
	MinhasPecas[REI] = new Rei[1];

	//0 peoes
	//1 Cavalos
	//2 Bispos
	//3 Torres
	//4 Rainha
	//5 Rei

	//Caso o jogador seja da cor Preta;
	if (this->Cor)
	{
		//Cria os peoes pretos
		for (int i = 0; i < NUMCOL; i++)
		{
			MinhasPecas[PEOES][i].SetPos(new int[2]{ 1,i });
			MinhasPecas[PEOES][i].SetID('P');
		}

		//Cria os cavalos 
		MinhasPecas[CAVALOS][0].SetPos(new int[2]{ 0,1 });
		MinhasPecas[CAVALOS][0].SetID('C');
		MinhasPecas[CAVALOS][1].SetPos(new int[2]{ 0,6 });
		MinhasPecas[CAVALOS][1].SetID('C');

		//Cria os Bispos 
		MinhasPecas[BISPOS][0].SetPos(new int[2]{ 0,2 });
		MinhasPecas[BISPOS][0].SetID('B');
		MinhasPecas[BISPOS][1].SetPos(new int[2]{ 0,5 });
		MinhasPecas[BISPOS][1].SetID('B');

		//Cria as Torres 
		MinhasPecas[TORRES][0].SetPos(new int[2]{ 0,0 });
		MinhasPecas[TORRES][0].SetID('T');
		MinhasPecas[TORRES][1].SetPos(new int[2]{ 0,7 });
		MinhasPecas[TORRES][1].SetID('T');

		//Cria a rainha 
		MinhasPecas[RAINHA][0].SetPos(new int[2]{ 0,3 });
		MinhasPecas[RAINHA][0].SetID('R');

		//Cria o rei 
		MinhasPecas[REI][0].SetPos(new int[2]{ 0,4 });
		MinhasPecas[REI][0].SetID('r');
	}
	//Caso o jogador seja da cor branca
	else
	{
		//Cria os peoes brancos
		for (int i = 0; i < NUMCOL; i++)
		{
			MinhasPecas[0][i].SetPos(new int[2]{6,i });
			MinhasPecas[0][i].SetID('P');
		}

		//Cria os cavalos 
		MinhasPecas[CAVALOS][0].SetPos(new int[2]{ 7,1 });
		MinhasPecas[CAVALOS][0].SetID('C');
		MinhasPecas[CAVALOS][1].SetPos(new int[2]{ 7,6 });
		MinhasPecas[CAVALOS][1].SetID('C');

		//Cria os Bispos 
		MinhasPecas[BISPOS][0].SetPos(new int[2]{ 7,2 });
		MinhasPecas[BISPOS][0].SetID('B');
		MinhasPecas[BISPOS][1].SetPos(new int[2]{ 7,5 });
		MinhasPecas[BISPOS][1].SetID('B');

		//Cria as Torres 
		MinhasPecas[TORRES][0].SetPos(new int[2]{ 7,0 });
		MinhasPecas[TORRES][0].SetID('T');
		MinhasPecas[TORRES][1].SetPos(new int[2]{ 7,7 });
		MinhasPecas[TORRES][1].SetID('T');

		//Cria a rainha 
		MinhasPecas[RAINHA][0].SetPos(new int[2]{ 7,3 });
		MinhasPecas[RAINHA][0].SetID('R');

		//Cria o rei 
		MinhasPecas[REI][0].SetPos(new int[2]{ 7,4 });
		MinhasPecas[REI][0].SetID('r');
	}
}

void Jogador::DestroiPecas()
{
	/*
	for (int i = 0; i < NumPecas; i++)
	{
		delete [] MinhasPecas;
	}
	delete[] MinhasPecas;
	*/
}

