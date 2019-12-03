#pragma once
#include <string>
#include <iostream>
#include "pch.h"
#include "Pecas.h"
#define NUMTIPOS 6

class Jogador
{
public:
	Jogador();
	~Jogador();

	std::string Nome;
	bool Cor;
	std::string Input;

	void Jogada();
	void SetNome(std::string nome);
	void InicializaPecas();
	void DestroiPecas();

	Pecas** MinhasPecas;

private: 
	bool TestarCor();
};

