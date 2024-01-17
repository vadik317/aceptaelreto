#include <iostream>
using namespace std;
int main()
{
    int c,n;
    cin >> c;
    while(c--){
        cin >> n;
        if (n==0) cout << "1\n";
        else if (n==1) cout << "1\n";
        else if (n==2) cout << "2\n";
        else if (n==3) cout << "6\n";
        else if (n==4) cout << "4\n";
        else {
            cout << "0\n";
        }
    }
    return 0;
}
