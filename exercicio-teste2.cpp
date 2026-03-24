#include <iostream>

using namespace std;

int main(){
    int vet[5];

    while (true) {
        int maiores = 0;
        int menores = 0;
        int soma = 0;

        cout << "Vamos la, veremos se os numeros sao maiores ou menores que 10!" << endl;

        for (int i = 0; i < 5; i++) {
            cout << "Digite um numero inteiro positivo: ";
            cin >> vet[i];

            if (vet[i] <= 0) {
                cout << "Numero invalido! Digite um numero positivo." << endl;
                i--;
                continue;
            }

            soma += vet[i];

            if (vet[i] > 10) {
                maiores++;
            } else {
                menores++;
            }
        }


        cout << "Maiores que 10: " << maiores << endl;
        cout << "Menores ou iguais a 10: " << menores << endl;
        cout << "Soma: " << soma << endl;

        int q;
        cout << "Digite 1 para continuar ou 0 para parar: ";
        cin >> q;

        if (q == 0) {
            break;
        }
    }

    return 0;
}