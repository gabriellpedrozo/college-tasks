#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main (){
    int Q, n, i = 1;

    ifstream entrada ("entrada.txt");
    ofstream saida ("saida.txt");

    entrada >> n;
    Q = pow(i, 2);

    while(Q <= n){
        saida << Q << " ";
        i++;
        Q = pow(i,2);
    } 

    entrada.close();
    saida.close();

    
    return 0;
}