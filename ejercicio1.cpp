#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int num3;
    int suma;
    float promedio;
    cout<<"ingresar el primer numero";
    cin>> num1;
    cout<<"ingresar el segundo numero";
    cin>> num2;
    cout<<"ingresar el tercer numero"; 
    cin>> num3;
    suma = num1+num2+num3;
    promedio = suma/3.0;
    cout<<"El promedio total es:"<<promedio;
    return 0;
}