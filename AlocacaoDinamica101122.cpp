#include "iostream"
#include "cstdlib"
#include "ctime"

using namespace std;

//Decalaração da struct:
typedef struct me cad;

int contador = 0;
int tecla; //tecla para o menu de seleção

struct me {
    int num;
    int pos;
    cad * liga;
};

//Ponteiros para os nós:
cad * ultimoNO;
cad * primeiroNO;

int random(){
    return rand() % 100; //Divisível
}

//Função de alocação:
void alocar() {
    contador++;
    cad * temp = (cad * ) malloc(sizeof(cad)); 
    if (contador == 1) {
        temp -> num = random();
        temp -> liga = NULL;
        temp -> pos = contador;
        primeiroNO = temp;
    } else {
        temp -> num = random();
        temp -> liga = NULL;
        temp -> pos = contador;
        ultimoNO -> liga = temp;
    }
    ultimoNO = temp;
}

//Função de Exibição:
void exibe() {
    cad * temp;
    temp = primeiroNO;
    while (temp != NULL) {
        cout << "Número: " << temp -> num << endl;
        cout << "Posição: " << temp -> pos << endl << endl;
        temp = temp -> liga;
    }
}

//Exibindo a posição dos valores:
void exibePos() {
    cad * temp;
    temp = primeiroNO;
    int posicao;

    cout << "Escolha uma posição: ";
    cin >> posicao;

    while (temp != NULL)
    {
        if (temp -> pos == posicao)
        {
            cout << endl << "Posição escolhida:" << endl;
            cout << "Número: " << temp->num << endl;
            cout << "Posicao: " << temp->pos << endl;
            cout << "Endereço de memória: " << temp->liga << endl << endl;

            break;
        }
        temp = temp -> liga;

    };
    
}

//Destruindo:
void destruir() {
    cad * temp;
    temp = primeiroNO;
    while (temp -> liga != NULL) {
        free(temp);
        temp = temp -> liga;
    }
    free(primeiroNO);
    free(ultimoNO);
}

//Menu de seleção:
int main() {
	setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    
    //Menu:
    MENU:
    cout << "\n * Menu * ";
    cout << "\n[1] - Alocar. \n[2] - Exibir. \n[3] - Destruir. \n[4]- Sair. \nSelecione: ";
    cin >> tecla;
    switch(tecla){
    	case 1:
    		for(int i = 0; i<=4; i++){
    			alocar();
			}
			break;
		case 2:
			for(int i = 0; i<=4; i++){
				exibe();
				exibePos();
			}
			break;
		case 3:
			for(int i = 0; i<=4; i++){
				destruir();
			}
			break;
		case 4:
			cout << "\nPrograma Finalizado...";
			exit(0);
			break;
		default:
			cout << "\nDigite uma opção válida!";
	}
	goto MENU;
}
