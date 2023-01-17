#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;

int lern1();
int modulo (int numero);

int main(){
    int num, modu;  
    num = lern1();  
    modu = modulo(num);  
    cout << modu << endl; 
    
}

int lern1(){ 
    int n1;
    cout << "Digite n1";cin >> n1;  return n1;
    
}

int modulo(int numero){
    int modu;
    if(numero < 0) modu = numero * -1;
    else modu = numero;return modu;
    
}
