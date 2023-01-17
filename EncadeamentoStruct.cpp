#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;
int cont = 0;
int tecla;

//Declara��o da struct:
typedef struct me cad2;
struct me{
	int pos;
	string nome;
	cad2 *anterior;
};

//Ponteiro ultimoNo e primeiroNo:
cad2 *ultimoNo;
cad2 *primeiroNo;


//Aloca��o:
void alocar(){
	cont++;
	cad2 *newcad = (cad2*)malloc(sizeof(cad2));
	if(cont == 1){
		newcad->anterior = NULL;
		newcad->pos = cont;
		primeiroNo= newcad;
		ultimoNo = newcad;
	}
	else{
		ultimoNo->pos = cont;
		newcad->anterior = NULL;
		primeiroNo = newcad;
	}
}

//Exibi��o:
void exibir(){
	cad2 *temp;
	temp = primeiroNo;
	while(temp != NULL){
		cout << temp->pos << endl;
		temp = temp->anterior;
	}
}

//Destruir:
void destruir(){
	cad2 *temp;
	temp = primeiroNo;
	while(temp->anterior != NULL){
		free(temp);
		temp = temp->anterior;
	}
	free(primeiroNo);
	free(ultimoNo);
}

//Menu de sele��o:
int main(){
	setlocale(LC_ALL, "Portuguese");
	MENU:
	cout << "\n* Menu *";
	cout << "\n[1] - Alocar. \n[2] - Exibir. \n[3] - Destruir. \n[4] - Sair. \nSelecione: ";
	cin >> tecla;
	
	switch(tecla){
		case 1:
			cout << "Realizando aloca��o de mem�ria!" << endl;
			for(int i=0; i <= 4; i++){
				alocar();
			}
			break;
		case 2:
			cout << "Exibindo: " << endl;
			for(int i=0; i <= 4; i++){
				exibir();
			}
			break;
		case 3:
			cout << "Destruindo..." << endl;
			for(int i=0; i <= 4; i++){
				destruir();
			}
			break;
		case 4:
			cout << "Terminando programa...!" << endl;
			exit(0);
			break;
		default:
			cout << "Por favor, selecione uma op��o v�lida!";
			break;
	}
	goto MENU;
	return 0;
}
