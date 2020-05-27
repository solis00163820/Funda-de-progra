#include <iostream>
#include <string.h>

using namespace std;
int main (){

    string palabra;
    cout<<"Ingrese una palabra"<<endl;
    cin>> palabra;
    int num1 = palabra.length();
    cout<<num1<<endl;
 
    if (num1>10)
    {
       cout<<"La palabra es mayor a 10 caracteres"<<endl;
    }else
    {
        cout<<"La palabra es menor a 10 caracteres"<<endl;
    }
    if (num1%2 == 0)
    {
        cout<<"Su longitud es par"<<endl;
    }else
    {
        cout<<"Su longitud es impar"<<endl;
    }
    
    
  return 0;
}

