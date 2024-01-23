#include <iostream>
using namespace std;
int main()
{
    int t,v,vm;
    while(cin >> t) {
        while(t--){
            cin >> v;
            if (v > vm) vm = v;
        }
        cout << vm << "\n";
        vm = 0;
    }

    return 0;
}
