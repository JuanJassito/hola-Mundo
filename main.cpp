#include <iostream>
using namespace std;

#include <Mascota.hpp>
#include <Alimento.hpp>
#include <Dibujo.hpp>

int main(int argc, char const *argv[])
{
    Dibujo dibujo1("./asets/amaranto.txt");
    dibujo1.Dibujar();

    Dibujo dibujo3("./asets/cat.txt");
    dibujo3.Dibujar();

    Mascota m1;
    Mascota m2;
    Mascota m3;

    Alimento alimento(5);

    m1.Comer(alimento);
    m2.Comer(alimento);
    m3.Comer(alimento);


    cout<<"Mascota "<<m1.LeerEnergia()<<endl;
    return 0;
}



