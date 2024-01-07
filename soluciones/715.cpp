#include <iostream>
using namespace std;
int main()
{
    int casos,uvas,personas;
    cin >> casos;
    while(casos--){
        cin >> uvas >> personas;
        if (uvas/personas < 12) {
            cout << "NO\n";
        } else {
            cout << "SI\n";
        }
    }
    return 0;
}
