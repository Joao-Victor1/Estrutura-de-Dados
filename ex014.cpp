#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>

using namespace std;


//Declaração de variáveis:

int tecla; //Valor de tecla do switch;
int a,b,c; //Variáveis que vão receber os valores da equação de Heron;
int A; //Variável auxiliar do cálculo da área do círculo;
int rad; //Variável que vai receber o valor do raio da circunferência;
int auxP; //Auxiliar do valor de P da equação de Heron;
int tri; //Auxiliar da equação de Heron;
int radix; //Raíz quadrada do resultado da equação de Heron (Resultado final);

//Heron:

int heron(int *a, int *b, int *c){
    
    //Declaração de variáveis da equação:
    int la, lb, lc;
    
    //Atribuindo variáveis aos ponteiros:
    
    la = *a;
    lb = *b;
    lc = *c;
    
    auxP = (*a + *b + *c) / 2; //Cálculo de P;
    tri = auxP*(auxP - *a)*(auxP - *b)*(auxP - *c); //Equação de Heron;
    radix = sqrt(tri); //Raíz da equação (Valor final = Área do triângulo);
    
    return radix;
}

//Leitura dos valores da equação de Heron:

void EquaHeron(){
    
    //Atribuição de valores:
    cout << "\nDigite o valor do lado A do triângulo: " << endl;
    cin >> a;
    
    cout << "Digite o valor do lado B do triângulo: " << endl;
    cin >> b;
    
    cout << "Digite o valor do lado C do triângulo: " << endl;
    cin >> c;
    
    //Enviando os valores por endereçamento:
    heron(&a, &b, &c);
    
    //Exibição do resultado final:
    cout << "\nA área do triângulo é de: " << radix << "cm²" << endl;
}

//Área de um círculo:

int circle(int *rad){
    
    //Variável de raio atribuída ao ponteiro;
    int auxRad = *rad;
    
    //Cálculo da área de um círculo
    A = 3.14 * (*rad * *rad);
    
    return A;
}

void exibeArea(){
    
    //Atribuição do valor do raio:
    cout << "Digite o valor do raio da circunferência: " << endl;
    cin >> rad;
    
    //Atribuindo o valor por endereçamento:
    circle(&rad);
    
    //Exibição do resultado final:
    cout << "\nA área do círculo é de: " << A << "cm²" << endl;
}

//Função main:
int main(){
    //Função setlocale:
    setlocale(LC_ALL, "Portuguese");
    
    //Menu de seleção:
    MENU:
    
    cout << "\n * Menu * " << endl;
    cout << "[1] - Equação de Heron. " << "\n[2] - Calcular área do círculo. " << "\n[3] - Sair." << endl;
    cin >> tecla;
    
    switch(tecla){
        case 1:
            EquaHeron();
            break;
        case 2:
            exibeArea();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Valor Inválido!!";
            break;
    }
    goto MENU;
    
    return 0;
}
   
