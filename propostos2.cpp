#include <iostream>

using namespace std;

int main(){
    int anos, meses, semanas, dias;

    cout << "Quantos anos voce tem??" << endl;

    cin >> anos; 
    
    meses = anos * 12;
    semanas = anos * 48;
    dias = meses * 30;

    cout << "Voce possui: " << meses << " meses;\n" << semanas << " semanas;\n" << dias << " dias de vida.\n";
    
    return 0;
}