#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    float x;

    cin >> x;

    ofstream saida("saida.txt");

    int parteInteira = x;
    float fracionaria = x - parteInteira;

    saida << parteInteira << endl;
    saida << fracionaria << endl;
    saida << floor(x) << endl;
    saida << round(x) << endl;

    return 0;
}
 