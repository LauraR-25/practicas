#include <iostream>
#include <fstream>
using namespace std;

int main(){

    int x=0;
    int data;
    fstream output("./data/data.txt");
    if(! output.is_open()){
        cout<< "Nose puede abrir ni crear el archivo"<< endl;
        return 0;
    }

    cout<<"Cuantos datos va a ingresar?"<<endl;
    cin>> x;

    while(x>0){
        cout<<"Ingrese un  numero entero"<<endl;
        cin>> data;
        output<<data<<endl;
        x--;
    }
}