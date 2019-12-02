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
	delete [] Posicao;
}

void Pecas::Movimento()
{

}

int* Pecas::GetPos()
{
	return this->Posicao;
}

char Pecas::GetId()
{
	return Identificador;
}
