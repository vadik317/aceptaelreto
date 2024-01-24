#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n, n >= 0){
        while(n && (n%2) == 0){
            n /= 10;
        }
        if (n == 0) cout << "SI\n";
        else {
            cout << "NO\n";
        }
    }
}
//Número hyperpar