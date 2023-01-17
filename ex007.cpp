#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>

using namespace std;

//Declaração de variáveis:
int n = 5;
int idade[] = {18,25,33,80,42};
string nome[5];
int auxMaior = idade[0];
int auxMenor = idade[0];
double auxMedia;
int auxSoma;
int i;

int main(){
    
    //Recebendo os nomes:
    for(i = 0; i < n; i++){
        cout << "Digite seu nome: " << endl;
        cin >> nome[i];
    }
    
    //Menor e maior idade:
    for(i = 0; i < n; i++){
        if(idade[i] > auxMaior){
            auxMaior = idade[i];
        }if(idade[i] < auxMenor){
            auxMenor = idade[i];
        }
    }
    
    //Média das idades:
    for(i = 0; i < n; i++){
        auxMedia = auxMedia + idade[i] / 5;
        
    }
    
    //Soma das idades:
    for(i = 0; i < n; i++){
        auxSoma = auxSoma + idade[i];
    }
    
    //Exibição:
    for(i = 0; i < 1; i++){
        cout << "\nNome com a maior idade: " << nome[3] << endl;
        cout << "Idade: "<< auxMaior << endl;
        cout << "Nome com a menor idade: " << nome[0] << endl;
        cout << "Idade: " << auxMenor << endl;
        cout << "Média das idades: " << auxMedia;
        cout << "\nSoma das idades: " << auxSoma;
    }
    return 0;
}
