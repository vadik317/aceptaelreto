#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int minutos, horas;
    char puntos;
    cin >> horas >> puntos >> minutos;
    while (horas+minutos != 0) {
        cout << (60-minutos) + ((23-horas)*60) << "\n";
        cin >> horas >> puntos >> minutos;
    }
}
