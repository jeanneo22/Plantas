#ifndef PLANTAS_H
#define PLANTAS_H

int cargaSol = 0; // define cargaSol como uma variável global
#include<cstring>
using std::string;
class Plantas {
    private:
        string tipoPlanta;
        int quantMaxPlantas; // quantidade maxima de plantas que pode ser usadas em um jogo
        int resistencia;
        string tipoAtaque;
        float velocidadeAtaque;
        int cargaSolMinima;
    public:
        Plantas(const Plantas *ob); // constroi uma planta a partir de outra

        // constroi uma Pea Shooter com parâmetros default no nivel 1
        Plantas(string tipoPlanta = "Pea Shooter", int quantMaxPlantas = 9,string resistencia = "normal",string tipoAtaque = "Feijao Explosivo",float velocidadeAtaque = 2.0,int cargaSolMinima = 50);
        string getResistencia();
        string getTipoAtaque();
        int getVelocidadeAtaque();
        void resistir(string const *resistencia);
        void atacar(string tipoAtaque,float velocidadeAtaque,int nAtaques);
        void coletarSol(int const *cargaSol, int sol);
};

#endif // PLANTAS_H
