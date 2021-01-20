#include <iostream>
#include <ctime>
#include <cmath>
#include <windows.h>

using namespace std;

int main(){ 

    string yeah[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    int m;


        while (m>25 )
        {
        cout<<"Dame una posicion ";
                    cin>>m;
        }
                do 
                {
                        if (m<=25 && m>=0)
                        {
                            for (int i = 0; i < 25; i++)
                            {
                                if (m==i)
                                {
                                    cout<<"Es la letra "<<yeah[i]<<" de mi array"<<endl;
                                } 
                            }

                        }

                            if (m==-1)
                            {
                                cout<<"Se acabo";
                                    return 0;
                            }
                            
                }
                while (m<25 && m<-1);
 



return 0;

}