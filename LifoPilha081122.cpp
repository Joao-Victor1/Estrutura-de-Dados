#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
#define max 2

using namespace std;

//Declaração da Struct para pilha:
typedef struct lifo pilha;

struct lifo{
	//Topos:
	int topoIdade;
	int topoNome;
	int topoSalario;
	
	//Pilhas:
	int idade[max];
	string nome[max];
	double salario[max];
};

//Leitura de valores para a pilha:

//Leitura da idade:
int lerIdade(){
	int idade;
	cout << "\nDigite sua idade: ";
	cin >> idade;
	return idade;
}

//Leitura do Nome:
string lerNome(){
	string nome;
	cout << "\nDigite seu nome: ";
	cin >> nome;
	return nome;
}

//Leitura do Salário:
double lerSalario(){
	double salario;
	cout << "\nDigite seu salário: ";
	cin >> salario;
	return salario;
}

//Verificando se as pilhas estão cheias ou vazias:

//Pilha Idade:
bool cheiaIdade(pilha p){
	if(p.topoIdade == max - 1){
		return true;
	}
	else{
		return false;
	}
}
bool vaziaIdade(pilha p){
	if(p.topoIdade == -1){
		return true;
	}
	else{
		return false;
	}
}

//Pilha Nome:
bool cheiaNome(pilha p){
	if(p.topoNome == max - 1){
		return true;
	}
	else{
		return false;
	}
}
bool vaziaNome(pilha p){
	if(p.topoNome == -1){
		return true;
	}
	else{
		return false;
	}
}

//Pilha Salário:
bool cheiaSalario(pilha p){
	if(p.topoSalario == max - 1){
		return true;
	}
	else{
		return false;
	}
}
bool vaziaSalario(pilha p){
	if(p.topoSalario == -1){
		return true;
	}
	else{
		return false;
	}
}

//Push para as pilhas:

//Push Idade:
pilha pushIdade(int idade, pilha p){
	if(cheiaIdade(p) == true){
		cout << "\nA pilha está cheia!\n";
		system("pause");
		return p;
	}
	p.topoIdade++;
	p.idade[p.topoIdade] = idade;
	cout << "\nA idade empilhada foi: " << idade << endl;
	system("pause");
	return p;
}

//Push Nome:
pilha pushNome(string nome, pilha p){
	if(cheiaNome(p) == true){
		cout << "\nA pilha está cheia!\n";
		system("pause");
		return p;
	}
	p.topoNome++;
	p.nome[p.topoNome] = nome;
	cout << "\nO nome empilhado foi: " << nome << endl;
	return p;
}

//Push Salário:
pilha pushSalario(double salario, pilha p){
	if(cheiaSalario(p) == true){
		cout << "\nA pilha está cheia!\n";
		system("pause");
		return p;
	}
	p.topoSalario++;
	p.salario[p.topoSalario] = salario;
	cout << "\nO nome empilhado foi: " << salario << endl;
	return p;
}

//Pop para as pilhas:

//Pop Idade:
pilha popIdade(pilha p){
	if(vaziaIdade(p) == true){
		cout << "\nA pilha já está vazia!\n";
		system("pause");
		return p;
	}
	cout << "\nA idade desempilhada será: " << p.idade[p.topoIdade] << endl;
	system("pause");
	p.idade[p.topoIdade] = '\0';
	p.topoIdade --;
	return p;
}

//Pop Nome:
pilha popNome(pilha p){
	if(vaziaNome(p) == true){
		cout << "\nA pilha já está vazia!\n";
		system("pause");
		return p;
	}
	cout << "\nA idade desempilhada será: " << p.nome[p.topoNome] << endl;
	system("pause");
	p.idade[p.topoNome] = '\0';
	p.topoNome --;
	return p;
}

//Pop Salário:
pilha popSalario(pilha p){
	if(vaziaSalario(p) == true){
		cout << "\nA pilha já está vazia!\n";
		system("pause");
		return p;
	}
	cout << "\nA idade desempilhada será: " << p.salario[p.topoSalario] << endl;
	system("pause");
	p.salario[p.topoSalario] = '\0';
	p.topoSalario --;
	return p;
}

//Mostrar pilhas:

//Mostrar Pilha Idade:
void mostrarPilhaIdade(pilha p ){
	if(vaziaIdade(p) == true){
		cout << "\nA pilha está vazia!\n";
		system("pause");
		return;
	}
	for(int i=p.topoIdade; i>=0; i--){
		cout << p.idade[i] << endl;
		system("pause");
	}
}

//Mostrar pilha Nome:
void mostrarPilhaNome(pilha p ){
	if(vaziaNome(p) == true){
		cout << "\nA pilha está vazia!\n";
		system("pause");
		return;
	}
	for(int i=p.topoNome; i>=0; i--){
		cout << p.nome[i] << endl;
		system("pause");
	}
}

//Mostrar pilha Salário:
void mostrarPilhaSalario(pilha p ){
	if(vaziaSalario(p) == true){
		cout << "\nA pilha está vazia!\n";
		system("pause");
		return;
	}
	for(int i=p.topoSalario; i>=0; i--){
		cout << p.salario[i] << endl;
		system("pause");
	}
}

int tela(){
	int tecla;
	
	system("cls");
	cout << "\n * MENU *";
	cout << "\n[1] - Push Idade. \n[2]- Push Nome. \n[3] - Push Salário. \n[4] - Pop Idade. \n[5] - Pop Nome. \n[6] - Pop Salário. \n[7] - Ver Pilha Idade. \n[8] - Ver Pilha Nome. \n[9] - Ver Pilha Salário. \n[10] - Sair. \nItem: ";
	cin >> tecla;
	return tecla;
}

void controlarPilha(pilha p){
	int tecla, idade;
	string nome;
	double salario;
	
	pilha p1;
	pilha p2;
	pilha p3;
	
	p1.topoIdade = -1;
	p2.topoNome = -1;
	p3.topoSalario = -1;
	
	do{
		tecla = tela();
		switch(tecla){
			case 1:
				idade = lerIdade();
				p1 = pushIdade(idade, p1);
				break;
			case 2:
				nome = lerNome();
				p2 = pushNome(nome, p2);
				break;
			case 3:
				salario = lerSalario();
				p3 = pushSalario(salario, p3);
			case 4:
				popIdade(p1);
				break;
			case 5:
				popNome(p2);
				break;
			case 6:
				popSalario(p3);
				break;
			case 7:
				mostrarPilhaIdade(p1);
				break;
			case 8:
				mostrarPilhaNome(p2);
				break;
			case 9:
				mostrarPilhaSalario(p3);
				break;
		}
	}
	while(tecla != 10);
	cout << "\nPrograma Finalizado...!\n";
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	pilha p1;
	controlarPilha(p1);
	return 0;
}


