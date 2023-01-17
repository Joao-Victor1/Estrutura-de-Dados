#include "iostream"
#include "cstdlib"
#include "ctime"

using namespace std;

//Decalara��o da struct:
typedef struct me cad;

int contador = 0;
int tecla; //tecla para o menu de sele��o

struct me {
    int num;
    int pos;
    cad * liga;
};

//Ponteiros para os n�s:
cad * ultimoNO;
cad * primeiroNO;

int random(){
    return rand() % 100; //Divis�vel
}

//Fun��o de aloca��o:
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

//Fun��o de Exibi��o:
void exibe() {
    cad * temp;
    temp = primeiroNO;
    while (temp != NULL) {
        cout << "N�mero: " << temp -> num << endl;
        cout << "Posi��o: " << temp -> pos << endl << endl;
        temp = temp -> liga;
    }
}

//Exibindo a posi��o dos valores:
void exibePos() {
    cad * temp;
    temp = primeiroNO;
    int posicao;

    cout << "Escolha uma posi��o: ";
    cin >> posicao;

    while (temp != NULL)
    {
        if (temp -> pos == posicao)
        {
            cout << endl << "Posi��o escolhida:" << endl;
            cout << "N�mero: " << temp->num << endl;
            cout << "Posicao: " << temp->pos << endl;
            cout << "Endere�o de mem�ria: " << temp->liga << endl << endl;

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

//Menu de sele��o:
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
			cout << "\nDigite uma op��o v�lida!";
	}
	goto MENU;
}
