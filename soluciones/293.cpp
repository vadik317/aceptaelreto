#include <iostream>
using namespace std;

int main() {
    unsigned int numCasos;
    int insectos, aracnidos, crustaceos, escalopendras, anillos;
    scanf("%d",&numCasos);

    while (numCasos--) {
        
        scanf("%d %d %d %d %d",&insectos,&aracnidos,&crustaceos,&escalopendras,&anillos);

        printf("%d\n",((insectos * 6) + (aracnidos * 8) + (crustaceos * 10) + (escalopendras * anillos * 2)));
    }

    return 0;
}
