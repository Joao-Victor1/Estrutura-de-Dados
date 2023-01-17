#include <iostream>


using namespace std;

int const tam = 4; //Variável global

int main()
{   
    //Arrays:
     string nome[tam];
     long int cpf[tam];
     string endereco[tam];
     string email[tam];
     long int telefone[tam];
     
     //Cadastro:
     
     for(int i = 0; i < tam; i++){
         cout << "\nRegistro:" << i << endl;
         cout << "\n Nome: ";
         cin >> nome[i];
         cout << "\n CPF: ";
         cin >> cpf[i];
         cout << "\n Endereço: ";
         cin >> endereco[i];
         cout << "\n e-mail: ";
         cin >> email[i];
         cout << "\n Telefone: ";
         cin >> telefone[i];
         
         // Impressão dos resultados
         cout << nome[i] << endl;
         cout << cpf[i] << endl;
         cout << endereco[i] << endl;
         cout << email[i] << endl;
         cout << telefone[i] << endl;
     }
     
    return 0;
}
