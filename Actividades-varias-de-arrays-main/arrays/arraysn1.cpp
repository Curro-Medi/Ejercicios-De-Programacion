#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main(){ 

    int abe[10];
    
         for (int i = 0; i <= 9 ; i++)
    {
            cout<<"Dame un numero"<<endl;
            cin>>abe[i];
    }
    
        for ( int ii = 0; ii<=9; ii++)
        {
            cout<<""<<endl;
            cout<<abe[ii]<<endl;
        }
    

    
    return 0;
}