#pragma once
class Pecas
{
private:

protected:

	int *Posicao;
	char Identificador;

public:
	Pecas();
	Pecas(char Id, int* Pos);
	~Pecas();	
	int* GetPos();
	char GetId();

	virtual void Movimento();

	
};

