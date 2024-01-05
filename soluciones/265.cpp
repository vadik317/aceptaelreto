#include <iostream>
using namespace std;
string suma(string n) {
    if (n.length() == 1) { 
        return(n);
    } else {
        return to_string(stoi(n)+stoi(suma(n.substr(1))));
    }
}

int main() {
    string num;
    cin >> num; 
    while(num!="0"){
        cout << suma(num) << "\n";
        cin >> num;
    }
    return 0;
}
