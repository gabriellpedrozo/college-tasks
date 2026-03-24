#include <iostream>

using namespace std;

int main() {
    int vet[5];

    while (true) {
        cout << "Vamos la, veremos se os numeros que voce escolher sao pares ou impares!" << endl;

        for (int i = 0; i < 5; i++) {
            cout << "Digite um numero inteiro positivo: ";
            cin >> vet[i];

            if (vet[i] <= 0) {
                cout << "Numero invalido! Digite um numero positivo." << endl;
                i--; // volta uma posição pra repetir esse índice
                continue;
            }

            if (vet[i] % 2 == 0) {
                cout << vet[i] << " e par" << endl;
            } else {
                cout << vet[i] << " e impar" << endl;
            }
        }

        int q;
        cout << "Digite 1 para continuar ou 0 para parar: ";
        cin >> q;

        if (q == 0) {
            break;
        }
    }

    return 0;
}