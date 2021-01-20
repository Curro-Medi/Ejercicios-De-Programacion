#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main(){ 

    srand(time(NULL));
    int arry[10];
    int a;
    float cont=0;
        for ( a = 0; a <= 9; a++)
        {
                    
             arry[a]=rand() %10;
             cont=cont+arry[a];
        
        }

      cout<<" array relleno "<< endl;
        for (a = 0; a <= 9; a++)
        {
           cout<<arry[a]<<endl;
        }
        
    cout<<"La media esss: ";

        cont=cont/10;
    cout<<cont;
    







 



    return 0;
}