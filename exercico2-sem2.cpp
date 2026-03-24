#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
float alturaDegrau, alturaDesejada;
int degraus;

ifstream entrada ("entrada.txt");
ofstream saida("degraus.txt");

entrada >> alturaDegrau;
entrada >> alturaDesejada;

float alturaDesejadaCm = alturaDesejada * 100;
degraus = ceil(alturaDesejadaCm/alturaDegrau);

saida << degraus;

entrada.close();
saida.close();

return 0; 
}