#include <iostream>
using namespace std;

void casoDePrueba() {
    
} // casoDePrueba

int main() {

  unsigned int numCasos;

  cin >> numCasos;
  for (unsigned int i = 0; i < numCasos; ++i) {
    int base, alt;
    cin >> base >> alt;
    cout << ((base*(alt+1))+(alt*(base+1)))<<"\n";
  }

  return 0;

} 
