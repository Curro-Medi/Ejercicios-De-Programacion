#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main(){ 

     srand((int) time(0));
        
        int p=0 ,m;
        int random[101];

            cout<<"Dime un numero y te dire las veces que se repite ";
            cin>>m;
                for (int i = 0; i <= 100; i++)
                {
                    random[i]=rand() %100;
                     cout<<random[i]<<endl;
                        if (random[i]==m)
                            {
                                p++;
                            }
                }
                
                cout<<"El numero "<<m<<" se ha repetido "<<p<<" veces"<<endl;

                  
                    
    

return 0;

}