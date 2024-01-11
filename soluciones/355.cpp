#include <iostream>

using namespace std;

int main()
{
    int dias, casos;
    cin >> casos;
    while (casos) {
        casos--;
        cin >> dias;
        if (dias%4 == 0 && dias%100 == 0 && dias %400 == 0){
            cout << "29\n";
        } else if (dias%4 == 0 && dias % 100 != 0) {
            cout << "29\n";
        } else {
            cout << "28\n"; 
        }
    }
    return 0;
}
