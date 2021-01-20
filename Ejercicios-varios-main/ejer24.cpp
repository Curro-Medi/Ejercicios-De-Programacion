#include <iostream>
#include <cmath>
using namespace std ;
int main (){
int p;
float kg;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"                            Bienvenido                                         "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"                                                                                                               "<<endl;

cout<<"Dame el peso en kilogramos"<<endl;
    cin>>kg;

cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
cout<<"                                                                              "<<endl;
cout<<"                             OPCIONES:                                        "<<endl;
cout<<"                                                                              "<<endl;
cout<<"                            1.Hectogramos                                     "<<endl;
cout<<"                            2.Decagramos                                      "<<endl;
cout<<"                            3.Gramos                                          "<<endl;
cout<<"                            4.Decigramos                                      "<<endl;
cout<<"                            5.Centigramos                                     "<<endl;
cout<<"                            6.Miligramos                                      "<<endl;
cout<<"                                                                              "<<endl;
cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;

    cin>>p;

switch (p)
{
case 1:     
         cout<<"\t Ha elegido la opcion de hectogramos y son: "<<kg*10<<endl;
    break;
case 2:     
         cout<<"\t Ha elegido la opcion de decagramos y son: "<<kg*100<<endl;
    break;
case 3:     
         cout<<"\t Ha elegido la opcion de gramos y son: "<<kg*1000<<endl;
    break;
case 4:     
         cout<<"\t Ha elegido la opcion de decigramos y son: "<<kg*10000<<endl;
    break;    
case 5:     
         cout<<"\t Ha elegido la opcion de centigramos y son: "<<kg*100000<<endl;
    break;
case 6:     
         cout<<"\t Ha elegido la opcion de miligramos y son: "<<kg*1000000<<endl;
    break;    

default:  
         cout<<"Eres tonto primo"<<endl;
    
    break;
}


return 0;

}