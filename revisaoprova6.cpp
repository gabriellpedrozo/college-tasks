#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int n, i = 0, M;

    ifstream entrada ("senha.txt");
    ofstream saida ("saida.txt");

    entrada >> n;


    while(M <= n){
        saida << M << " ";
        i++;
        M = pow (2, i) - 1;
    }

    entrada.close();
    saida.close();

    return 0;
}