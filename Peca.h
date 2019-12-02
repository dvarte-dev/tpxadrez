#include "Jogador.h"
class Peca
{
private:
	Jogador jogador;
public:
	int Casa[2];
public:
	virtual void Movimento();
	void SetJogador(Jogador Qual);
};
