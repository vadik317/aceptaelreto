#include <iostream>
using namespace std;

int main() {
    unsigned int casos;
    int horas,minutos,velocidad;
    cin >> casos;
    for(int i; i < casos; i++) {
    scanf("%d:%d 0 %d",&horas,&minutos,&velocidad);
    cout << ((horas + (minutos / 60.0))*velocidad)<<"\n";
    }
    return 0;
}
