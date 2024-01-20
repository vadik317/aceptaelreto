#include <iostream>
using namespace std;
int main()
{
    int c;
    long long int n;
    cin >> c;
    while (c--){
        cin >> n;
        if(n%3==1) cout << "NO\n";
        else{
            cout << "SI\n";
        }
    }
    return 0;
}
