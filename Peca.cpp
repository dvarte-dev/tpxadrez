#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Peca.h"

//Define o destino e chama a funcao jogada que envia a peca e a jogada desejada para conferir se e possivel realizar a jogada
virtual void Peca::Movimento()
{

}
void Peca::SetJogador(Jogador Qual)
{
	jogador = Qual;
}
