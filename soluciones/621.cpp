#include <iostream>
using namespace std;
int main()
{
    int casos,num;
    cin >> casos;
    while(casos--){
        cin >> num;
        if (num%2 == 0) cout << num+1 << "\n";
        else {
            cout << num-1 << "\n";
        }
    }
    return 0;
}
