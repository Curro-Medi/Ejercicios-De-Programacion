#include <iostream>
#include <ctime>
#include <cmath>
#include <windows.h>

using namespace std;

int main(){ 

srand((int) time(0));
int random[11];
int m=0, p=0;
    for (int i = 0; m <= 4; i++)
            {
                random[i]=rand() %100;
                
                    if (random[i]%2==0)
                    {
                        m++;
                        cout<<random[i]<<endl;
                    }
              
            }
                    for (int i = 0; p <= 4; i++)
                {
                    random[i]=rand() %100;
                    
                        if (random[i]%2!=0)
                        {
                            p++;
                            cout<<random[i]<<endl;
                        }
                
                } 
return 0;

}