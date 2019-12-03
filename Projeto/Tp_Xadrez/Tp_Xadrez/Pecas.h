#pragma once
class Pecas
{
private:

protected:

	int *Posicao;
	char Identificador;
	bool Morto;

public:
	Pecas();
	Pecas(char Id, int* Pos);
	~Pecas();	
	int* GetPos();
	char GetId();
	void SetPos(int* Pos);
	bool GetMorto();
	void SetID(char id);

	virtual void Movimento();

	
};

