#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;

double const pi = 3.14; //Constante.
double altura = 5.55; //Variável global.

void verVolume(double raio); //Declaração.

int main(){
    double raio = 10.5;
    verVolume(raio); //Chamada por referência.
    verVolume(13.4); //Chamada por valor.
    system("sleep 5");
}

//Código do void

void verVolume(double raio){
    double volume = raio * raio * pi * altura;
    cout<<"\nVolume: " << volume << endl;
    return;
}
