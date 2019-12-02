#include "pch.h"
#include "Jogador.h"
#include <string>

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
}

void Jogador::Jogada()
{

}
void Jogador::SetNome(std::string nome)
{
	
}
void Jogador::InicializaPecas()
{
	//define as pecas iniciais de acordo com a cor do jogador.
}

