#include "Plantas.h"
#include <iostream>
#include <string>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;
using std::string;
/*Plantas::Plantas()
{
}
*/
int Plantas::cargaSol = 0;
int Plantas::quantMaxPlantas = 9;
Plantas::Plantas(const Plantas &p) 
{
	if(p.cargaSolMinima <= cargaSol) {
		tipoPlanta = p.tipoPlanta;
		resistencia = p.resistencia;
		tipoAtaque = p.tipoAtaque;
		velocidadeAtaque = p.velocidadeAtaque;
		cargaSol = cargaSol - p.cargaSolMinima;
	}
}
void Plantas::setQuantMaxPlantas(int qMP) 
{
	if(qMP >= 9 && qMP <= 45)
		quantMaxPlantas = qMP;
}
void Plantas::setCargaSolMinima(int cSM)
{
	if(cSM >= 0)
		cargaSolMinima = cSM;
}
void Plantas::setResistencia(int r)
{
	if(r==20 || r==60 || r==100)
		resistencia = r;
}
void Plantas::atacar() const
{
	cout << "TipoAtaque = "<< tipoAtaque << endl;
	cout << "Velocidade de ataque = " << velocidadeAtaque << endl;
}
void Plantas::coletarSol(const int sol) 	
{
	cargaSol = 0;
	cargaSol = cargaSol + 25*sol;
	cout << "Carga Sol: "<< cargaSol << endl;
}
void Plantas::exibePlanta() const
{
	cout << "Planta: " << tipoPlanta << endl;
	cout << "Resistencia atual: " << resistencia << endl;
	cout << "Tipo de Ataque: " << tipoAtaque << endl;
	cout << "Velocidade de Ataque: " << velocidadeAtaque << endl;
	cout << "Carga de sol minima para criar a planta: " << cargaSolMinima << endl;
	
}



