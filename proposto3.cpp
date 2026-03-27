#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int embalagem, caixa;

    cout << "Digite o numero da embalagem que informaremos o numero sa caixa em que se encontra" << endl;
    cin >> embalagem;

    caixa = ceil((float)embalagem / 6);

    cout << "A embalagem se necontra na caixa: " << caixa << endl;
    
    
    return 0;
}