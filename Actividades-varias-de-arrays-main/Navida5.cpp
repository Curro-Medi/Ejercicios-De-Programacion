#include <iostream>
#include <ctime>
#include <cmath>
#include <windows.h>

using namespace std;

int main(){ 

    srand((int) time(0));
    int random[101];
    int mayor=0, menor=0;
        for (int i = 0; i <= 100; i++)
        {
            random[i]=rand() %100;
            cout<<random[i]<<endl;
        
        
                int mayor= random[i];
                for (int c = 0; c < 100; c++)
                {
                    if (mayor<random[c])
                    {
                            mayor=random[c];
                            cout<<" * ";
                    }
                    
                }
                        int menor= random[i];
                        for (int c = 0; c < 100; c++)
                        {
                            if (menor<random[c])
                            {
                                    menor=random[c];
                                     cout<<" # ";
                            }
                            
                        }
                 
        }
               
                  
                    
    

return 0;

}