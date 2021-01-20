#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main(){ 
srand((int) time(0));
    int random[100];
        
       
       
       for (int i = 0; i < 100; i++)
       {
            random[i]=rand() %10;
            cout<<random[i]<<endl;
       }
       
    return 0;
}