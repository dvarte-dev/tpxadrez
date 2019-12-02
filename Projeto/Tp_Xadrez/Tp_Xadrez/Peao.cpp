#include "pch.h"
#include "Peao.h"


Peao::Peao()
{
	this->PrimeiroMovimento = true;
}

Peao::Peao(int *Pos)
{
	this->Posicao = Pos;
	this->PrimeiroMovimento = true;
}


Peao::~Peao()
{

}
