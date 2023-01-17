#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
using namespace std;

int quad(int quadd);
void exibe();
int dif;
int A;
int B;

int main(){
    exibe();
    return 0;
}

int quad(int quadd){
    cout << "Digite o valor de A: " << endl;
    cin >> A;
    cout << "Digite o valor de B: " << endl;
    cin >> B;
    
    dif = A - B;
    quadd = dif * dif;
    
    return quadd;
}

void exibe(){
    int quadd = quad(quadd);
    cout << "O quadrado da diferença de A e B é: " << quadd;
}

