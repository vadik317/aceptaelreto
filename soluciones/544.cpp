#include <iostream>

using namespace std;

int main()
{
    int numero_uvas;
    long long int peso;
    while(cin>>numero_uvas>>peso) {
        long long int valor_uva;
        long long int maximo = 0;
        int uvas_totales = 0;
        while(numero_uvas--) {
            cin >> valor_uva;
            if (valor_uva + maximo <= peso) {
                uvas_totales++;
                if (valor_uva > maximo) {
                    maximo = valor_uva;
                }
            }
            else if (valor_uva < maximo) {
                maximo = valor_uva;
            }
        }
        cout << uvas_totales << "\n";
    }
    return 0;
}
