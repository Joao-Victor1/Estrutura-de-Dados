#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>

using namespace std;

//Decalra��o da struct me com Alias cad2:
typedef struct me cad2;

struct me {
    int pos;
    string nome;
    cad2 * anterior;
};

//Ponteiro da Struct:
int index = 0;
cad2 * ultimoNO;

//Aloca��o em um ponteiro tempor�rio:
void alocar(string nome){
    cad2 * temp = (cad2 *) malloc(sizeof(cad2));

    temp->pos = ++index;
    temp->nome = nome;
    temp->anterior = index == 1 ? NULL : ultimoNO;

    ultimoNO = temp;
}

//Exibi��o:
void exibir(){
    cad2 * temp;
    temp = ultimoNO;
    while (temp != NULL)
    {
        cout << "Posi��o: " << temp->pos << endl;
        cout << "Nome: " << temp->nome << endl;
        cout << "Endere�o de Mem�ria: " << temp << endl << endl;

        temp = temp->anterior;
    }
}

//Destruir:
void destruir(){
    cad2 * temp;
    cad2 * aux;

    temp = ultimoNO;

    while (temp != NULL)
    {
        aux = temp->anterior;
        cout << "Liberando mem�ria" << temp << endl;
        free(temp);
        temp = aux;
    }
    ultimoNO = NULL;
    index = 0;
}

int main(int argc, char const *argv[])
{
    string nome;
    int tecla;

    MENU:
    	
    cout << "* |Menu * \n[1] - Alocar. \n[2] - Exibir. \n[3] - Destruir. \n[4] - Sair. " << "\n> ";
    cin >> tecla;

    switch (tecla){
    case 1:
        int num;
        cout << "Quantos cadastros deseja inserir? \n> ";
        cin >> num;
		
        for (int i = 0; i < num; i++)
        {
            cout << i+1 << " Digite um nome: ";
            cin >> nome;
            alocar(nome);
        }
        break;
    
    case 2:
        exibir();
        break;
    
    case 3:
        cout << "Destruindo..." << endl;
        destruir();
        break;
    
    case 4:
        cout << "Liberando mem�ria..." << endl;
        destruir();

        cout << "Programa finalizado..." << endl;
        exit(0);
        break;
    
    default:
    	cout << "POr favor, insira uma op��o v�lida!!";
        break;
    }
    goto MENU;
    
    return 0;
}
