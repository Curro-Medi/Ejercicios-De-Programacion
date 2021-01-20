#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 #include <windows.h>
using namespace std ;
int main (){
string n,p;
int a,t;
a=0;
t=0;
do
{
 
   cout<<"Dime tu nombre de usuario"<<endl;      
   cin>>n; 
  
   a=a+1;
} while (n!="admin");

do
{
   
    cout<<"Dime tu contrasenia"<<endl;      
   cin>>p; 
     
    t=t+1;
} while (p!="1234");



cout<<"Muy bien te lo sabe crack"<<endl;

cout<<"Has intentado el usuario "<<a<<" veces y "<<t<<" veces la contrasenia"<<endl;




return 0;

    
}