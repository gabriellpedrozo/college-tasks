#include <iostream>

using namespace std;

int main(){
    int n,
    soma = 0,
    cont = 0;

    cin >> n;

    while(n != 0){
        soma += n;
        cont ++;
        cin >> n;
    }

    cout << "Quantidade " << cont << endl;
    cout << "Soma "<<soma << endl;
    

    return 0;
}