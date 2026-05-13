#include <iostream>
#include <fstream>

using namespace std;

int main(){
    float n;

    ifstream arquivo("numeros.txt");
    ofstream saida("saida.txt");

    while(arquivo >> n){
        if(n >= 1000){
            n /10;
        }
        
    }
    
    
    
    
    return 0;
}