#include <string>
using namespace std;

#ifndef PLANTAS_H
#define PLANTAS_H

class Plantas
{
private:
	string tipoPlanta;
	int resistencia;
	string tipoAtaque;
	float velocidadeAtaque;
	int cargaSolMinima;
	
	static int cargaSol;
	static int quantMaxPlantas;
public:
	Plantas(string = "Pea Shooter",int = 60, string = "Feijoes Explosivos", float = 2.0,int = 100);
	Plantas(const Plantas &);
	void setQuantMaxPlantas(int);
	void setCargaSolMinima(int);
	void setResistencia(int);
	inline void resistir(){ resistencia -= 20; }
	void atacar() const;
	void coletarSol(const int);
	void exibePlanta() const;

};

#endif // PLANTAS_H
