#include <iostream>
using namespace std;

int main(){
    int n, soma = 0, cont = 0;
    float media;

    cin >> n;

    while(n != 0){
    
        if(n > 0){
        soma += n;
        cont++;
    }
        cin >> n;
    }


    if(cont > 0){
    media = (float)soma / cont;
    cout << "Media : " << media << endl;
    }
    else {
        cout << "Nao foi digitado numero positivo"<< endl;
    }
    
    return 0;
}