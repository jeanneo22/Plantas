#include "Plantas.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
using std::cout;
using std::string;

// constroi uma planta a partir de outra
Plantas(const Plantas *ob){
    tipoPlanta = ob->tipoPlanta;
    quantMaxPlantas = ob->quantMaxPlantas;
    resistencia = ob->resistencia;
    tipoAtaque = ob->tipoAtaque;
    velocidadeAtaque = ob->velocidadeAtaque;
    cargaSolMinima = ob->cargaSolMinima;

}
// constroi uma Pea Shooter com parâmetros default no nivel 1
Plantas(string tPlanta = "Pea Shooter", int qMaxPlantas = 9,string r = "normal",string tAtaque = "Feijao Explosivo",float vAtaque,int cSolMinima = 100) {
    if(cSolMinima <= cargaSol) {
        tipoPlanta = tPlantas;
        quantMaxPlantas = qMaxPlantas;
        resistencia = r;
        tipoAtaque = tAtaque;
        velocidadeAtaque = vAtaque;
        cargaSolMinima = cSolMinima;
    }else
        return;
}
void resistir(int const *resistencia) {
    if(*resistencia == "baixo") {
	   cout << "Fim da planta";
    }else if(*resistencia == "normal") {
        delay(2000);
        cout << "Fim da planta";
    }else if(*resistencia == "alto") {
        delay(5000);
        cout << "Fim da planta";
    }
}
string getResistencia() { return resistencia;}

string getTipoAtaque() { return tipoAtaque; }

int getVelocidadeAtaque(){ return velocidadeAtaque;}

void atacar(string tipoAtaque,float velocidadeAtaque,int nAtaques) {
    if(nAtaques != 0) {
        delay(nAtaques * velocidadeAtaque);
        cout << tipoAtaque << "\n";
        atacar(tipoAtaque,velocidadeAtaque);
        nAtaques--;
    }else{ return; }
}
inline void coletarSol(int const *cargaSol, int sol) {
    (*cargaSol) += 25 * sol;
}

