#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
using namespace std;

double volume(double vol);
int largura;
int altura;
int comprimento;

int main(){
    
    double vol = volume(vol);
    cout << "O volume do retângulo é: " << vol << endl;
    return 0;
}

double volume(double vol){
    cout << "Digite a largura do retângulo: " << endl;
    cin >> largura;
    
    cout << "Digite o altura do retângulo: " << endl;
    cin >> altura; 
    
    cout << "Digite o comprimento do retângulo: " << endl;
    cin >> comprimento;
    
    vol = largura * altura * comprimento;
    
    return vol;
}
