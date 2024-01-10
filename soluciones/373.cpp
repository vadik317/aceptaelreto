#include <iostream>
using namespace std;
int main() {
    int casos;
    cin >> casos;
    while (casos--) {
        long long int num;
        cin >> num;
        long long int numCuadrado = num * num;
        long long int numMenosDosCuadrado = (num - 2) * (num - 2);
        long long int resultado = (numCuadrado * 2) + ((numCuadrado - numMenosDosCuadrado) * (num - 2));
        cout << resultado << "\n";
    }

    return 0;
}
