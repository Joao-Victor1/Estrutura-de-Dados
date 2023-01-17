#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;

int raiz(int quad);
void exibe();
int RA, RB, RC;
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
    
    RA = A * A;
    RB = B * B;
    RC = C * C; 
    
    quad = RA + RB + RC;
    
    return quad;
}

void exibe(){
    int quad = raiz(quad);
    
    cout << "A soma dos quadrados dos valores é: " << quad << endl;
}
