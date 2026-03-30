#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c;

    cout << "Digite os tres lados para verificar se forma um triangulo e de qual tipo: " << endl;
    cin >> a >> b >> c;
    
    if(a < (b + c) && b < (a + c) && c < (a + b)){
        if((a == b) && (b == c)) {
            cout << "E um triangulo equilatero " << endl;
        }
        else if((a == b) || (b == c)){
            cout << "e um triangulo isoceles"<< endl;
        }
            else{
        cout << " E um triangulo escaleno" << endl;
    }
    }
    else{
        cout << "Nao é possivel formar um triangulo com esses valores" << endl;
    }

    return 0;
}
