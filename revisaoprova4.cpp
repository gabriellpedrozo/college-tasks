#include <iostream>
using namespace std;

int main(){
    int n, maior;

    cin >> n;

    if(n != 0){
        maior = n;
    }
    while(n != 0){
        if(n > maior){
            maior = n;
        }
         cin >> n;
    }
    cout << maior << endl;

    return 0;
}