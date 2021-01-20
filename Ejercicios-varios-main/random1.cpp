#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
int random,n,m;
m=1;
srand((int) time(0));

random=rand() %10;


cout<<"Intenta adivina el numero crack"<<endl;
        cin>>n;  

do
{
    if (n!=random)
    {
        if (random<n)
        {
            cout<<"Eu so alto proba con ailgo menor"<<endl;
        }
        if (random>n)
        {
            cout<<"Eu so bajo proba con ailgo mauyor"<<endl;
        }
        
      cout<<"Intenta adivina el numero crack"<<endl;
        cin>>n;  
        m=m+1;
    }
    
    else
    {
        cout<<"Eu sou courrecto"<<endl;
        exit(-1);
    }
    
    

} while (m!=3);


cout<<"Peurdiste so macaco"<<endl;
cout<<random<<endl;






















return 0;
}








