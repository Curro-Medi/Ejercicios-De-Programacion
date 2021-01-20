#include <iostream>
using namespace std;
int main(){
    int numero,fact,suma=0;
    
    
    cout<<"Dime un numero "<<endl;
    cin>>numero;
    do
    {
        
         if(numero<0){
            cout<<"Eso es negativo tonto"<<endl;
        }
        else
        {
           
               fact=numero;
        for (int i = numero-1; i >=1; i--)
        {
            fact=fact*i;
            
        }
        cout<<fact<<endl;
        suma=suma+fact;
        numero--;
            
        }
        
        
    } while (numero>=0);
    cout<<"La suma de los factoriales es "<<suma<<endl;
    
       
        
       
        
        
        
        




    return 0;
}