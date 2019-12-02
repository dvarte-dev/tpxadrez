class Jogador
{
private:
	//Tabuleiro tabuleiro;
	Peca pecas[16];
public:
	char Nome[10];

	byte Cor;
public:
	void Jogada();
	void SetNome(char nome[10]);
	void InicializaPecas();
};
#endif
