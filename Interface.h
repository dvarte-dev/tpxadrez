#ifndef INTERFACE_H
#define INTERFACE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Tabuleiro.h"
#include "Jogador.h"

class Interface
{
private:
	Tabuleiro Tabuleiro;

public:
	void InicializarVariaveis();

	void Creditos();

	void Voltar();

	void ExibirVencedor(Jogador Vencedor);

	void AtualizarTela();

};
#endif
