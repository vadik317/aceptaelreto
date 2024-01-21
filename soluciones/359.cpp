#include <iostream>
using namespace std;
int main()
{
    int casos,cantidad,suma,valor;
    cin >> casos;
    while(casos--){
        while(cin >> valor, valor != -1) {
            suma += valor;
            ++cantidad;
        } 
        if(suma == cantidad) cout << "Justo\n";
        else if(suma > cantidad) cout << "Suerte\n";
        else cout << "Timo\n";
        suma = 0, cantidad = 0, valor = 0;
    }
}
