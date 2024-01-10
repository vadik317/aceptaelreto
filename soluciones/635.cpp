#include <iostream>
using namespace std;
int main()
{
    int casos,n;
    cin >> casos;
    while (casos--) {
        cin >> n;
        if (n % 100 == 0) {
            cout << n/100 << "\n";
        } else {
            cout << (n/100)+1 << "\n";
        }
    }
}
