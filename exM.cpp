#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;

int raiz(int quad);
void exibe();
int soma;
int A;
int B;
int C;

int main(){
    exibe();
    return 0;
}

int raiz(int quad){
    cout << "Diigite o valor de A: " << endl;
    cin >> A;
    cout << "Digite o valor de B: " << endl;
    cin >> B;
    cout << "Digite o valor de C: " << endl;
    cin >> C;
    
    soma = A + B + C;
    quad = soma * soma;
    
    return quad;
}

void exibe(){
    int quad = raiz(quad);
    
    cout << "A quadrado da soma dos valores: " << quad << endl;
}
