#include "Jogador.h"
#include "Interface.h"
#include "Peca.h"

class Tabuleiro
{
private:
	byte Casas[8][8];

	Jogador Jogador1;

	Jogador Jogador2;

	Interface interface;
public:
	byte Turno;


public:
	void HabilitarTurno();

	bool ConferirJogada(Peca Qual);

	void Vencedor();

	void InicializarJogo();

};
#endif
