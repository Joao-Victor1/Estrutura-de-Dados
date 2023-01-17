#include <iostream>
#include <cstdlib>

using namespace std;

//Declara��o da Struct:
struct pilha{
	int pos;
	string nome;
	pilha *ant; //Encadeamento;
};

pilha *topo = NULL; //Pilha vazia com topo nulo;
pilha *temp; //Ponteiro tempor�rio;
int tecla; //Vari�vel para sele��o do menu;
int pos; //Auxiliar de posi��o da pilha;
pilha *primeiroNO;

//Push:
void push(){
	//Alocar um valor digitado pelo usu�rio:
	cout << "\nDigite um nome para alocar: ";
	pilha *novaPilha = new pilha();
	cin >> novaPilha->nome;
	novaPilha->ant = topo;
	topo = novaPilha; //O novo n� se torna o topo;
	
	cout << "\nNome: " << novaPilha->nome << " Inserido!" << endl;
	system("pause");
	system("cls");
}

//Pop:
void pop(){
	if(topo == NULL){
		cout << "\nA pilha j� est� vazia!";
	}
	else{
		temp = topo;
		cout << "\nNome: " << topo->nome << " removido!" << endl;
		topo = topo->ant;
		free(temp);
		system("pause");
		system("cls");
	}
}

//Exibir:
void exibir(){
	if(topo == NULL){
		cout << "\nA pilha est� vazia!" << endl;
		system("pause");
		system("cls");
	}
	else{
		cout << "\nNomes da pilha:" << endl;
		temp = topo;
		//Exibir todos os valores inseridos:
		while(temp != NULL){
			cout << temp->nome << "\n";
			temp = temp->ant;
		}
		system("pause");
		system("cls");
	}
}

//Exibir por posi��o:
void exibePos(){
	temp = topo;
	cout << "Escolha uma posi��o: ";
	cin >> pos;
	
	while(temp != NULL){
		if(temp->pos == pos){
			cout << "Nome: " << temp->nome << endl;
			cout << "Posi��o: " << temp->pos << endl;
		}
		temp = temp->ant;
	}
}

//controle da pilha:
void controle(){
	//Menu de sele��o:
	MENU:
	cout << "\n * Menu * " << endl;
	cout << "\n[1] - Alocar. \n[2] - Exibir. \n[3] - Exibir por posi��o. \n[4] - Remover. \n[5] - Sair. \nSelecione: ";
	cin >> tecla;
	
	switch(tecla){
		case 1:
			push();
			break;
		case 2:
			exibir();
			break;
		case 3:
			exibePos();
			break;
		case 4:
			pop();
			break;
		case 5:
			exit(0);
			break;
		default:
			cout << "\nPor favor, insira uma op��o v�lida!" << endl;
			break;
	} 
	goto MENU;
}

int main(){
	//setlocale:
	setlocale(LC_ALL, "Portuguese");
	
	//Menu:
	controle();
}



