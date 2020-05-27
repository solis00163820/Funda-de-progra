#include <iostream>

using namespace std;
int divisor(int numerador, int denominador);
int main(){
    int numerador;
    int denominador;
    cout<<"Digite el numerador"<<'\n';
    cin>> numerador;
    cout<<"Digite el denominador"<<'\n';
    cin>> denominador;
    if (divisor(numerador,denominador)>0)
    {
        cout<<"el numero"<<numerador<<"NO es divisible entre"<<denominador;
    }else
    {
        cout<<"el numero"<<numerador<<"SI es divisible entre"<<denominador;
    }
    return 0;
}
int divisor(int numerador, int denominador){
  
    if (numerador<denominador)
    {
        return numerador;
    }else
    {
        return divisor(numerador-denominador,denominador);
    }
}