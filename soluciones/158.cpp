#include <iostream>
using namespace std;
int main() {
    int casos,saltos,actual,anterior,arriba,abajo;
    cin >> casos;
    while (casos--){
        cin >> saltos;
        saltos--;
        cin >> anterior;
        while(saltos--){
            cin >> actual;
            if (anterior < actual) arriba++;
            else if (anterior > actual) abajo++;
            anterior = actual;
        }
        cout << arriba << " " << abajo << "\n";
        arriba = 0;
        abajo = 0;
    }
    return 0;
}
