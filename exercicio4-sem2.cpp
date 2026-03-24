#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int numero, p1, p2, p3;

    ifstream entrada("chaves.txt");
    ofstream saida("codigo.txt");

    if (!entrada || !saida) {
        cout << "Erro ao abrir arquivo!" << endl;
        return 1;
    }

    cin >> numero;
    entrada >> p1, p2, p3;

    int resultado1 = numero % p1;
    int resultado2 = numero % p2;
    int resultado3 = numero % p3;

    saida << resultado1 << endl;
    saida << resultado2 << endl;
    saida << resultado3 << endl;

    entrada.close();
    saida.close();

    return 0;
}