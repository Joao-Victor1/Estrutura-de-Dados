#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

//Declaração de variáveis.
double valorprincipal[] = {3000.00, 1200.00};
int dias[] = {5,3};
double ValorPagar[5];
double percent; //Variável para calcular a porcentagem.
double aux; //Variável auxiliar que vai somar os valore do array + porcentagem.
int n = sizeof(valorprincipal)/sizeof(double);

//Função para calcular o valor total do pagamento com multa e juros:
double calculaValor(){ 
    for(int i = 0; i < n; i++){
        percent = valorprincipal[i] * 0.03; //3% ( 2% da multa + 1% de juros).
        aux = valorprincipal[i] + percent;
        ValorPagar[i] = aux;
        cout << ValorPagar[i] << " - ";
    }
    return 0;
}

//Mostrar:
void mostrar(){
    for(int i = 0; i < n; i++){
        cout << "\nValor Principal e dias de atraso: \n" << valorprincipal[i] << " - ";
        cout << dias[i];
    }
}

//Menu de exibição: 
int main(){
    int tecla;
    double calculaValor_ = calculaValor();
    MENU:
        system("clear");
        cout << " * Menu * " "\n[1] - Exibir" "\n[2] - Sair" "\nSelecione: ";
        cin >> tecla;
        
        switch(tecla){
            case 1:
                mostrar();
                cout << "\nTotal a ser pago: \n" << calculaValor();
                break;
            case 2:
                exit(0);
                break;
        }
        
    return 0;
}


