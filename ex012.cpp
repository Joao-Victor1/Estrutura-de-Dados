#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int const n = 4; //Tamanho
int linha =-1;
int tecla; //Tecla de seleção do Switch.
int P,S; //Variáveis auxiliares.

//Declaração da Struct:
struct Valor{
    //Colunas da Struct:
  int v1[n];
};

struct Valor v; //Alias.

//Inserir valor:
int getValor(){
    int v1;
    cout << "Digite um valor: ";
    cin >> v1;
    return v1;
}

//Adicionar mais um valor:
void add(){
    linha ++;
    int va = getValor();
    v.v1[linha] = va;
}

//Exibição dos valores:
void exibe(){
    for(int i = 0; i <= linha; i++){
        cout << "Os valores inseridos foram: " << v.v1[i] << endl;
    }
}

//Cálculo do produto do primeiro pelo terceiro valor:

int CalcProd(){
    P = v.v1[0] * v.v1[2];
    cout << "\nO resultado do produto entre o primeiro e o terceiro valor é: " << P;
    return P;
}

//Cálculo da soma do segundo valor pelo quarto valor:

int CalcSoma(){
    S = v.v1[1] + v.v1[3];
    cout << "\nO resultado da soma entre o segundo e o terceiro valor é: " << S;
    return S;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    //Menu de seleção:
    
    MENU:
    cout << "\n * Menu * " << endl;
    cout << "[1] - Inserir valores (insira até 4)." << "\n[2] - Exibir. " << "\n[3] - Produto. " << "\n[4] - Soma" << "\n[5] - Sair. " << endl;;
    cin >> tecla;
    
    switch(tecla){
        case 1:
            add();
            break;
        case 2:
            exibe();
            break;
        case 3:
            CalcProd();
            break;
        case 4:
            CalcSoma();
            break;
        case 5:
            exit(0);
            break;
    }
    goto MENU;
    
    return 0;
}

