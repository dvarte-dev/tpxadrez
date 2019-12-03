#include "pch.h"
#include "Pecas.h"


Pecas::Pecas()
{
}

Pecas::Pecas(char Id, int* Pos)
{
	this->Identificador = Id;
	this->Posicao = Pos;
}

Pecas::~Pecas()
{
	delete [] this->Posicao;
}

void Pecas::Movimento()
{

}

int* Pecas::GetPos()
{
	return Posicao;
}

char Pecas::GetId()
{
	return Identificador;
}
void Pecas::SetPos(int* Pos)
{
	this->Posicao = Pos;
}

bool Pecas::GetMorto()
{
	return Morto;
}

void Pecas::SetID(char ID)
{
	Identificador = ID;
}
