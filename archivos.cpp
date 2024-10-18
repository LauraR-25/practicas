#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Personas{
    string nombre;
    int cedula;
    string correo;
}P;

int main(){
    int x=0;
    ofstream output("./data/data.txt");

    if( ! output.is_open()){
        cout << "El archivo no pudo ser creado ni abierto";
        return 0;
    }

    cout << "Ingrese la cantidad de datos que desea crear: ";
    cin >> x;

    for(int i=0; i<x; i++){
        cout << "Ingrese el nombre" << i+1 << ": ";
        cin >> P.nombre;

        cout << "Ingrese la cedula: ";
        cin >> P.cedula;

        cout << "Ingrese el correo electronico: ";
        cin >> P.correo;

        output << P.nombre << " " <<P.cedula << " " <<P.correo << endl;
    }
    return 0;
}