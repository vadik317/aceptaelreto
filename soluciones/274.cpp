#include <iostream>
using namespace std;
int main() {
    unsigned int casos;
    cin>>casos;
    for (unsigned int i=0;i<casos;++i) {
        int dias_a;
        int dias_semana;
        int primer_dia;
        cin>>dias_a>>dias_semana>>primer_dia;
        cout<<(dias_a-(dias_semana-primer_dia+1)%dias_semana)/dias_semana<<"\n";
    }
    return 0;
}
