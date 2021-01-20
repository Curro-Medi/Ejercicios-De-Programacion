#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main(){
    //nombre archivo
    ofstream archivo;
    archivo.open("pruebita.txt",ios::out);
    
    if(archivo.fail()){
        cout<<"Imposible abrir el archivo";
        exit(1);
    }
    
    archivo<<"hola bro, como lo llevas?";
    archivo.close();
    cout << "Fichero creado con exito";
    return 0;
}