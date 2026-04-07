#include <iostream>

using namespace std;

int main(){
    int a, b, mdc, maior, menor;

    cout << "digite numeros para saber o mdc: " << endl;
    cin >> a >> b;

    if (a >= b){
            maior = a;
            menor = b;
    }
    else {
            maior = b;
            menor = a;
    }
    
    while ((maior % menor)!= 0 ){
            mdc = maior % menor;
            maior = menor;
            menor = mdc;
    }

    cout << menor << endl;
    
    return 0;
}