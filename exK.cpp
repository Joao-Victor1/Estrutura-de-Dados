#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;

double converte(double conv); //Declaração da função que vai fazer a conversão de valores.
void mostrar(); //Sub-rotina para exibição do resultado.
double dol; //Variável que vai receber o valor do dólar.
double real; //Variável que vai receber o valor do usuário em reais.


int main(){
    mostrar();
    return 0;
}

double converte(double conv){
    cout << "Digite o valor atual da cotação do Dólar: " << endl;
    cin >> dol;
    cout << "Digite quanto você tem em reais: " << endl;
    cin >> real;
    
    conv = real / dol;
    
    return conv;
}

void mostrar(){
    double conv = converte(conv);
    cout << "Você tem: " << conv << " Dólares" << endl;
}
