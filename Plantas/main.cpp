#include <iostream>
#include<cstring>
#include<cstdlib>
#include"Plantas.h"
using namespace std;

int main()
{
    Plantas ob("Pea Shooter",9,"normal","Feijao Explosivo",2.0,50);
    string r = ob.getResistencia();
    ob.resistir(&r);
    ob.atacar(ob.getTipoAtaque(),ob.getVelocidadeAtaque(),5);
    ob.coletarSol(&cargaSol,3);
    return 0;
}
