#include <iostream>
#include <ctime>
#include <cmath>
#include <windows.h>

using namespace std;

int main(){ 

int distancia=0;

    int abe[5];
    
    for (int i = 0; i <= 4 ; i++)
    {
            cout<<"Dame un numero"<<endl;
            cin>>abe[i];
    }    

        int mayor= abe[0];
        for (int c = 0; c < 5; c++)
        {
               if (mayor<abe[c])
               {
                       mayor=abe[c];
                     
               }
               
        }
        
                for (int ii = 0; ii <=4 ; ii++)
                {
                        distancia=mayor-abe[ii];
                        cout<<"La distancia que separa al "<< ii+1 << " elemento mayor es: "<<distancia<<endl;
                      
                }                 


return 0;

}