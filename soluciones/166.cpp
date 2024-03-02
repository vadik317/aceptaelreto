#include <iostream>
using namespace std;
int main()
{
    int a,b,distA,distB;
    while(cin>>a >> b, a && b){
        if (a<b){
            distA = b-a;
            distB = a + 99-b;
        } else if (a>b){
            distA = 99-a+b;
            distB = a-b;
        }
        if(a == b) cout << "0\n";
        else if (distA<distB) cout << distA << "\n";
        else cout << distB << "\n";
    }
}
//Zapping
