#include <iostream>


using namespace std;

int main()
{
    string nome[] = {"Sara Lemes", "Ricardo Jafé"}; 
    double salario[] = {12000, 10243.20};
    int idade[] = {30, 45};
    int i = 0; //Variável índice para percorrer o array.
    double percent = 0; //variável para calcular a porcentagem.
    double aux = 0; //Variável auxiliar de resutado.
    double n = sizeof(salario)/sizeof(double); //Tamanho do array.
    string dec; //Variável de decisão. 
    
    //Menu de execução:
    
    cout << "[1] - Executar programa \n[2] - Sair\n";
    cin >> dec;
    
    //Estrutura de decisão da execução.
    if(dec == "1"){
        for(i = 0; i < n; i++){
            percent = salario[i] * 0.1;
            aux = salario[i] + percent;
            https://www.onlinegdb.com/#tab-stdin
            //Impressão dos resultados.
            cout << " Olá! " <<  nome[i] << endl;
            cout << " Idade: " << idade[i] << endl;
            cout << " Seu salário com aumento de 10% é: " << aux << endl;
        }
    }else if(dec == "2"){
        cout << "Até logo!";
    }

    return 0;
}
