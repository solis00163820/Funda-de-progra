#include <iostream>
using namespace std;

int main(){
   int num;
   cout<<"Ingrese un numero"<<endl;
   cin>> num;

     if (num>0)
   {
       cout<<"El numero es positivo"<<endl;
   }else if (num==0)
   {
       cout<<"El numero es 0"<<endl;
   }else
   {
       cout<<"El numero es negativo"<<endl;
   }
   
   return 0;
}