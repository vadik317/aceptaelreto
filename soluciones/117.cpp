#include <iostream>
using namespace std;
int main() {
  unsigned int numCasos;
  cin >> numCasos;
  for (unsigned int i = 0; i < numCasos; ++i) {
    string soy,nombre;
    cin >> soy >> nombre;
    cout << "Hola, " << nombre << "." << endl;
  }
  return 0;
} 
