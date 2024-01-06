#include <iostream>

using namespace std;

int main()
{
    int casos, dia, mes;
    cin >> casos;
    while (casos--) {
        cin >> dia >> mes;
        if  (dia==25 && mes ==12) {
            cout << "SI\n";
        } else {
            cout << "NO\n";
        }
    }
}
