#include <iostream>
#include <string>
using namespace std;

int main()
{
    int casos;
    string a, b;
    cin >> casos;
    while (casos) {
        casos--;
        cin >> a >> b;
        if (a == "Luke" && b == "padre") {
            cout << "TOP SECRET\n";
        } else {
            cout << a << ", yo soy tu " << b << "\n";
        }
    }
}
