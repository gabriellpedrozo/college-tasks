#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int valor;

    cin >> valor;

    ofstream saida("saque.txt");

    int quant100 = valor / 100;
    int resto = valor % 100;

    int quant50 = resto / 50;
    resto = resto % 50;

    int quant10 = resto / 10;
    
    saida << quant100 << endl;
    saida << quant50 << endl;
    saida << quant10 << endl;
    
    return 0;
}
