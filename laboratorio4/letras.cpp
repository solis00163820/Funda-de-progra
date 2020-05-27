#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string palabra;
    cout<<"Ingrese una palabra"<<endl;
    cin>> palabra;
    cout<<"La primera letra es";
    cout<<"La ultima letra es"<<palabra[palabra.length()-1]<<endl;
    if (palabra[0] == palabra [palabra.length()-1])
    {
        cout<<"La palabra si empieza y si finaliza con la misma letra";
    }else
    {
        cout<<"La palabra no empieza y no finaliza con la misma letra";
    }
    return 0;
}

