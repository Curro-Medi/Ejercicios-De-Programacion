#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std ;
int main (){
string n;
int p;
int i;
cout<<"Dime tu  nombre"<<endl;
    cin>>n;
cout<<"Y cuantas veces quieres que lo repita?"<<endl;
    cin>>p;

for (int i = 0 ; i < p ; ++i ) {
    cout<< n <<"\n";
    
}
 return 0;
}