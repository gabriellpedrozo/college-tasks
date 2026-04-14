#include <iostream>
#include <fstream>

using namespace std;

int main (){
    int n, i = 1, soma = 0;

    ifstream entrada ("entrada.txt");
    ofstream saida ("saida.txt");

    entrada >> n;

    while ( soma + i <= n){
        soma += i;
        saida << soma << " ";
        i++;
    }


    entrada.close();
    saida.close();

    
    return 0;
}