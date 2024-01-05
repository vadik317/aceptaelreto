#include <iostream>
using namespace std;
int main()
{
    unsigned int casos;
    int ahorros,cambio;
    cin >> casos;
    while (casos != 0) {
        casos--;
        scanf("%d %d",&ahorros,&cambio);
        if ((ahorros+cambio) >= 0) {
            printf("SI\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
