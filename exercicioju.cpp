#include <iostream>

using namespace std;

int main(){
    float massa;
    int tempo = 0;

    cin >> massa;

    while(massa >= 0.10){
       
        massa = massa * 0.75;
        tempo += 30;
    }

    int  horas;
    horas = tempo / 3600;
    tempo = tempo % 3600;

    int  minutos;
    minutos = tempo / 60;
    tempo = tempo % 60;
    
    cout << horas << ":" << minutos << ":" << tempo << endl;
 
    return 0;
}