#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Plantas.h"
using namespace std;

int main()
{
    Plantas ob;
    ob.atacar(ob.getTipoAtaque(),ob.getVelocidadeAtaque(),5);
	string r = ob.getResistencia();
    ob.resistir(&r);
    ob.coletarSol(&cargaSol,3);
    return 0;
}
