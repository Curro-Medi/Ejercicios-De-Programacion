#include <iostream>
using namespace std;

int main() {

char letra;
cout<<"Ingrese una letra y dire si es consonante o no"<<endl;
cin>>letra;
switch (letra){

  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
        cout<<"Es una vocal"<<endl;
        break;
   
  
  
  default:cout<<"Es una consonante"<<endl;
    break;
}
return 0;

}










