#include <iostream>
using namespace std;

#include <Mascota.hpp>
#include <Alimento.hpp>
#include <Dibujo.hpp>
#include <list>

int main(int argc, char const *argv[])
{
    list<Dibujo> dibujos;

    Dibujo dibujo1("./asets/amaranto.txt");
    dibujo1.Dibujar();

    Dibujo dibujo3("./asets/cat.txt");
    dibujo3.Dibujar();

    // dibujos.push_front(dibujo1);
    // dibujos.push_front(dibujo3);

    list<Mascota> mascotas;

    Mascota m1;
    Mascota m2;
    Mascota m3;

    mascotas.push_back(m1);
    mascotas.push_back(m2);
    mascotas.push_back(m3);

    Alimento alimento(5);

    for (auto && mascotaActual : mascotas)
    {
        mascotaActual.Comer(alimento);
    }
    
    for (auto &&mascotaActual : mascotas)
    {
        cout<<"Mascota "<<mascotaActual.LeerEnergia()<<endl;
    }
 
    return 0;
}



