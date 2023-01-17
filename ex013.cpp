#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>

using namespace std;

int const n = 1; //Tamanho;
double PC; //Variável auxiliar de porcentagem;
double SR; //Salário reajustado;
int linha = -1;
int tecla;


//Declaração da Struct:
struct trabalhador{
  double SM[n];
  double PR[n];
};

struct trabalhador tb; //Alias;

//Leitura do salário:
double getSM(){
    double SM;
    cout << "Digite seu salário: ";
    cin >> SM;
    return SM;
}

//Leitura do percentual:
double getPR(){
    double PR;
    cout << "Digite o percentual de reajuste do salário: ";
    cin >> PR;
    return PR; 
}

//Inserção de salário e reajuste:
void add(){
    linha ++;
    double sal = getSM();
    tb.SM[linha] = sal;
    double rea = getPR();
    tb.PR[linha] = rea;
    
}


//Exibir salário e reajuste inserido:
void ExibeSal(){
    for(int i = 0; i <= linha; i++){
        cout << "\nO valor de salário inserido foi: " << tb.SM[i] << endl;
        cout << "O valor de percentual de reajuste inserido foi: " << tb.PR[i] << endl;
    }
}

//Adicionando reajuste:
double calcR(){
    for(int i = 0; i <= linha; i++){
        PC = tb.SM[i] * tb.PR[i];
        SR = tb.SM[i] + PC;
        cout << "\nO salário com o reajuste inserido é de: " << SR << endl;
    }
    return 0;
 }

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    //Menu de seleção:
    MENU:
    cout << "\n * Menu * " << endl;
    cout << "[1] - Inserir salário e reajuste. " << "\n[2] - Exibir salário e reajuste inserido" << "\n[3] - Exibir salário com reajuste. " << "\n[4] - Sair. " << endl;
    cin >> tecla;
    
    switch(tecla){
        case 1:
            add();
            break;
        case 2:
            ExibeSal();
            break;
        case 3:
            calcR();
            break;
        case 4:
            exit(0);
            break;
    }
    goto MENU;
    
    
    return 0;
}
