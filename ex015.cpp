#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>

using namespace std;

//Declaração de variáveis:

double PC; //Variável auxiliar de porcentagem;
double calc; //Auxiliar de return do cálculo;
int const n = 2; //Tamanho;
int linha=-1; //Adição de linhas;
int tecla; //Valor da tecla;

//Declaração da struct:

typedef struct pessoa ps1; //Inicializando struct e definindo Alias;

//Colunhas da struct:
struct pessoa{
    string nome[n];
    int idade[n];
    string sexo[n];
    double salario[n];
    double salarioNovo[n];
};

ps1 ps; //Objeto da struct;

//Leitura do nome:
string ler_nome(){
    string nome;
    cout << "Digite seu nome: ";
    cin >> nome;
    
    return nome;
}

//Leitura da idade:
int ler_idade(){
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    
    return idade;
}

//Leitura do sexo:
string ler_sexo(){
    string sexo;
    cout << "Digite seu sexo: ";
    cin >> sexo;
    
    return sexo;
}

//Leitura do salário:
double ler_salario(){
    double salario;
    cout << "Digite seu salário: ";
    cin >> salario;
    
    return salario;
}

//Cálculo de aumento do salário:
double getAumento(double *salario){
    ps1 *ptps; //Ponteiro;
    ptps = &ps; //Atribuindo por endereçamento;
    
    PC = (*salario) * 0.1;
    calc = (*salario) + PC;
    
    return calc;
}

//Inserção de dados:
void novaLinhaStruct(){
    ps1 *ptps; //Ponteiro;
    ptps = &ps; //Atribuindo por endereçamento;
    
    linha++;
    string nom = ler_nome();
    ptps->nome[linha] = nom; //Linha do nome;
    
    int idad = ler_idade();
    ptps->idade[linha] = idad; //Linha da idade;
    
    string sex = ler_sexo();
    ptps->sexo[linha] = sex; //Linha de sexo;
    
    double sal = ler_salario();
    ptps->salario[linha] = sal; //Linha do salário;
    
    double salNovo = getAumento(&sal);
    ptps->salarioNovo[linha] = salNovo; //Linha do salário com aumento de 10%;
}

//Mostrar dados:
void listarLinhasStruct(){
    ps1 *ptps; //Ponteiro;
    ptps = &ps; //Atribuindo por endereçamento;
    
    for(int i = 0; i<=linha; i++){
        cout << "\nNome: " << ptps->nome[i] << endl;
        cout << "Idade: " << ptps->idade[i] << endl;
        cout << "Sexo: " << ptps->sexo[i] << endl;
        cout << "Salário: " << ptps->salario[i] << endl;
        cout << "Novo salário: " << ptps->salarioNovo[i] << endl;
    }
}

//Função main:
int main(){
    //setlocale:
    setlocale(LC_ALL, "Portuguese");
    
    //Menu de seleção:
    
    MENU:
    cout << "\n * Menu * " << endl;
    cout <<"[1] - Ler linha. " << "\n[2] - Mostrar. " << "\n[3] - Sair. " << endl;
    cin >> tecla;
    
    switch(tecla){
        case 1:
            novaLinhaStruct();
            break;
        case 2:
            listarLinhasStruct();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "\nOpção inválida!!! Por favor, digite novamente!" << endl;
            break;
    }
    goto MENU;
    
    return 0;
}
