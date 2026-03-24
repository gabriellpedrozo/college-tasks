#include <iostream>
 using namespace std;

    int main(){
        float valor,valorTotalAntes, valorTotalDepois, valorParcelas;
        int parcelas;

        cin >> valor;
        cin >> parcelas;

        valorParcelas = valor / parcelas;
        valorTotalAntes = (valorParcelas * 1.10) * parcelas;
        valorTotalDepois = valorTotalAntes * 0.90;

        cout << valorTotalAntes << endl;
        cout << valorTotalDepois << endl;

        return 0;
    }