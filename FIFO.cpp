#include <iostream>
#include <cstdlib>

using namespace std;
int total; // contar o total de elementos;

//Declaração da Struct:
struct noFifo {
    int chave; // Sequencial número;
    noFifo * prox; //ponteiro para guardar o próximo elemento da fifo;
};

noFifo * primeiroNo; // endereço do primeiro elemento;
noFifo * ultimoNo; // endereço do último elemento;

//Método construtor:
void construtor() {
    primeiroNo = ultimoNo = NULL;
    total = 0;
}

//Verificando se está vazia:
bool vazia() {
    return (primeiroNo == NULL);
}

//Inserir nó:
void inserirNo(int valor) {
    noFifo * novoNo = (noFifo * ) malloc(sizeof(noFifo));
    if (novoNo == NULL) {
        cout << "\nErro de alocação!" << endl;
        return;
    }
    //Atributos:
    novoNo -> chave = valor; //Aloca o valor;
    novoNo -> prox = NULL; // configurar o ponteiro interno
    total++; // incrementa o total
    //Novo nó:
    if (vazia() == true) {
        primeiroNo = novoNo;
        ultimoNo = novoNo;
    } else {
        ultimoNo -> prox = novoNo;
    }
    ultimoNo = novoNo;
}

//Remover nó:
void removerNo() {
    noFifo * temp; // ponteiro temporário
    temp = primeiroNo; // guarda o primeiro Nó que será removido
    if (!vazia()) {
        primeiroNo = temp -> prox;
    }
    free(temp);
    total--; // decrementa o total
}

//Remover nome:
void removerNome(int chave){
    noFifo * temp = primeiroNo;
    noFifo * anterior;

    while (temp != NULL)
    {
        if (temp->chave == chave)
        {
            anterior->prox = temp->prox;
            free(temp);
            break;
        } else
        {
            anterior = temp;
            temp = temp->prox;
        }
    }
}

//Exibir:
void exibir() {
    noFifo * temp;
    temp = primeiroNo;
    while (temp != NULL) {
        cout << temp -> chave << " ";
        temp = temp -> prox;
    }

    cout << endl;
    free(temp);
}

//Destruir:
void destruir() {
    noFifo * temp, * aux;
    temp = primeiroNo;
    while (temp != NULL) {
        aux = temp;
        temp = temp -> prox;
        free(aux);
    }
    cout << "\nFIFO destruida..." << endl;
}

//Função main:
int main(){
	//setlocale:
	setlocale(LC_ALL, "Portuguese");
	
    construtor();
    int tecla;
    int valor;
    
	//Menu de seleção:
    MENU:

    system("cls");
    cout << "* Menu * " << endl;
    cout << "\n[1] - Inserir. \n[2] - Remover. \n[3] - Remover por nome. \n[4] - Exibir. \n[5] - Destruir. \n[6] - Sair. \nSelecione: ";
    cin >> tecla;
    system("cls");

    switch (tecla){
    case 1:
        cout << "Insira o valor: ";
        cin >> valor;
        inserirNo(valor);
        break;
    
    case 2:
        cout << "Removendo primeiro valor da fila" << endl;
        removerNo();
        break;
    
    case 3:
        cout << "Insira o valor que deseja remover: ";
        cin >> valor;
        cout << "Removendo valor" << endl;
        removerNome(valor);
        break;
    
    case 4:
        cout << "Mostrando valores: " << endl;
        exibir();
        break;
    
    case 5:
        destruir();
        break;
    
    case 6:
        exit(0);
        break;
    
    default:
    	cout << "Por favor, insira uma opção válida!\n";
        break;
    }
    system("pause");
    goto MENU;
    return 0;
}
