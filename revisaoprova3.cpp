#include <iostream>

using namespace std;

int main(){
    int n, par = 0 , impar = 0;

    cin >> n;
    while(n != 0){
        if(n % 2 == 0 ){
            par ++;
        }
        else{
            impar ++;
        }
        cin >> n;
    }

    cout << "Pares: " << par << endl << "Impares: " << impar << endl;

    return 0;
}