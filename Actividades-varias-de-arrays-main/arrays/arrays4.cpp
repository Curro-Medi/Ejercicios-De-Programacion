#include <iostream>
#include <ctime>
#include <cmath>
#include <windows.h>

using namespace std;

int main(){ 

int distancia=0;

    int abe[6];
    
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

                    int menor= abe[0];
                        for (int c = 0; c < 5; c++)
                        {
                            if (menor>abe[c])
                            {
                                    menor=abe[c];
                                    
                            }
                        }
    
                        distancia=mayor-menor;
                        cout<<"La distancia que separa al menor del elemento mayor es: "<<distancia<<endl;
return 0;

}