#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;

double const txmulta = 0.02;

//função de leitura:
double lerValor(){  
    double val;                                    
    cout << "Digite Prestação:";                                    
    cin >> val;  return val; 
    
}
//tipo void para mostrar o valor final:
void mostrar(double val, double multa){ 
    double valorFinal;
    valorFinal = val + multa;
    cout<< "\nValor a pagar: "<< valorFinal;
    
}
//função para calcular a multa:
double calcMulta(double valorPrestacao){
    return(valorPrestacao * txmulta );  
    
}

int main(){
    double valorPrest, valorMulta; 
    int tecla;
    MENU:
    system("sleep 1");
    cout << "menu\n1 Executar\n2 Sair\nitem:"; 
    cin >> tecla;switch(tecla){   
        case1: valorPrest = lerValor();                  
        valorMulta = calcMulta(valorPrest);                  
        mostrar (valorPrest, valorMulta);
        break;
        
        case2:  
        cout << "\nFim do programa!\n";                  
        system("sleep 1"); 
        exit(0);
        break;   
        
    } 
    goto MENU; 
    return 0;    
    
}

