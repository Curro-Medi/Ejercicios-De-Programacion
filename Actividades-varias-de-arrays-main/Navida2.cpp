#include <iostream>
#include <windows.h>

using namespace std;

int main(){ 
  
    int a=0;
    int num[]={0,1,2,3,4,5,6,7,8,9,10};
   

    cout<<"Dame numero y te saco la tabla de multiplicar"<<endl;
        cin>>a;
        for (int i = 0; i < 11; i++)
        {

            cout<<a<<" x "<<i<<" = "<<a*i<<endl;
           
        }
        



return 0;

}