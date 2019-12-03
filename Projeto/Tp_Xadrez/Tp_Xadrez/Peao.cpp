#include "pch.h"
#include "Peao.h"


Peao::Peao()
{
	this->PrimeiroMovimento = true;
	this->SetID('P');
}

Peao::Peao(int *Pos)
{
	this->Posicao = Pos;
	this->PrimeiroMovimento = true;
	this->SetID('P');
}

Peao::~Peao()
{

}
