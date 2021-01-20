#include <iostream>
#include <windows.h>

using namespace std;

int main(){ 
  
    int dia[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    string mes[]={"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};
    int annio[]={1990,1991,1992,1993,1994,1995,1996,1997,1998,1999,2000,2001,2002,2003,2004,2005,2006,2007,2008,2009,2010};

    
int n,x;
string m;

    
        cout<<"Que dia naciste?"<<endl;
        cin>>n;
            for (int i = 0; i < 31; i++)
            {
                if (n==dia[i])
                {
                    cout<<"Es la posicion "<<i<<" de mi array"<<endl;
                } 
            }
                    cout<<"En que mes naciste?"<<endl;
                    cin>>m;
                            for (int i = 0; i < 12; i++)
                            {
                                if (m==mes[i])
                                {
                                    cout<<"Es la posicion "<<i<<" de mi array"<<endl;
                                }
                            }
                                    cout<<"En que annio naciste?"<<endl;
                                    cin>>x;
                                        for (int i = 0; i < 21; i++)
                                        {
                                            if (x==annio[i])
                                            {
                                                cout<<"Es la posicion "<<i<<" de mi array"<<endl;
                                            }
                                            
                                        }


    

return 0;

}