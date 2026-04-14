#include <iostream>

using namespace std;

int main (){
    int n,
    cont = 0,
    soma = 0;
    
    
    while (cont < 10){
        cin >> n;
        soma += n;
        cont++;
    }

    cout << soma << endl;
    
    return 0;
}