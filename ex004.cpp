#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int vet[] = {1,3,4,-1,0,4,19};

float valorMedia(){ //Função (variável) cálculo da média dentre os valores do array.
    float media = 0;
    int tot = sizeof(vet)/sizeof(int); //Fórmula para pegar a quantidade de elementos de um array.
    for(int i = 0; i < tot; i++){
        media += vet[i];
    }
    media /= tot;
    return(media);
    
}
int main(){
    float media = valorMedia(); //Variável para execução de uma função.
    cout << endl << media << endl;
    system("sleep 1");
}
