#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;

double diametro(double diam);
int raid(int raio);
int area(int ar);
void mostraDiam();

int comp = 10;
int quad;
int tecla;

int main(){
    int diam = diametro(diam);
    int raio = raid(raio);
    int ar = area(ar);
    MENU:
    cout << "\n * Menu *" << endl;
    cout << "[1] - Diametro. " << "\n[2] -  Raio " << "\n[3] - Área" << "\n[4] - Sair" << endl;
    cin >> tecla;
    
    switch(tecla){
        case 1:
            cout << "O diametro da circunferência é: " << diam;
            break;
        case 2:
            cout << "O raio da circunferência é: " << raio;
            break;
        case 3:
            cout << "A área da circunferência é: " << ar;
            break;
        case 4:
            exit(0);
            break;
    }
    goto MENU;
    return 0;
}

double diametro(double diam){
    diam = comp / 3.14;
    
    return diam;
}

int raid(int raio){
    int diam = diametro(diam);
    raio = diam/2;
    
    return raio;
}

int area(int ar){
    int raio = raid(raio);
    quad = raio * raio;
    ar = 3.14 * raio;
    
    return ar;
}
