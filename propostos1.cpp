#include <iostream>

using namespace std;

//difrentes formas para resolver 1 exercicio

//int main (){
    //float soma = 0;
    //int valor;

    //cout << "Digite os numeros que deseja saber a media!"<< endl;

    //cin >> valor;
    //soma += valor;

    //cin >> valor;
    //soma += valor;

    //cin >> valor;
    //soma += valor;

    //cin >> valor;
    //soma += valor;

    //cout << "a media dos numeros e: " << soma/4 << endl;
    
     //return 0;
//}

int main (){
    int num1, num2, num3, num4;

    cout << "Digite os numeros que deseja saber a media!"<< endl;

    cin >> num1
    >> num2
    >> num3
    >> num4;

    float media = (num1 + num2 + num3 + num4) / 4; 

    cout << "a media dos numeros e: " << media << endl;
    
    return 0;
}
