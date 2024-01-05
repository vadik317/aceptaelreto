#include <iostream>

using namespace std;

int main()
{
    int caso = 1;
    cin >> caso;
    while (caso != 0) {
        if (caso%2==1) {
            cout << "IZQUIERDA\n";
        }
        else {
            cout << "DERECHA\n";
        }
        cin >> caso;
    }

    return 0;
}
