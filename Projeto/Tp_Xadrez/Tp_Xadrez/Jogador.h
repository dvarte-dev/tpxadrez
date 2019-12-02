#pragma once
#include <string>
#include <iostream>
#include "pch.h"
#include "Pecas.h"
class Jogador
{
public:
	Jogador();
	~Jogador();

	std::string Nome;
	bool Cor;
	int NumPecas;
	std::string Input;

	void Jogada();
	void SetNome(std::string nome);
	void InicializaPecas();
	void DestroiPecas();
	Pecas** MinhasPecas;
};

