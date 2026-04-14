#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int massa, tempo = 0, limite ; 

    ifstream arquivo("amostras.txt");
    ofstream saida("resto.txt");
    
    arquivo >> massa >> limite;
    
    while(massa >= limite ){
        massa = massa * 0.82;
        tempo += 50;
    }

    int horas = tempo / 3600;
    int minutos = (tempo % 3600) / 60;
    int segundos= tempo % 60;

    saida << "Massa Final:  " << massa << endl;
    saida << "Tempo : " << horas << "h" 
        << minutos << "m " 
        << segundos << "s " << endl;
    

    arquivo.close();
    saida.close();
    
    return 0;
}