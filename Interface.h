#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

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
