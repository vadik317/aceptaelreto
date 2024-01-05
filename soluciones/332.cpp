#include <iostream>
using namespace std; 
int main() { 
    int numCasos; 
    cin >> numCasos; 
    for (int i = 0; i < numCasos; ++i) { 
        int sumas_parejas[10];       // Suma de las carretas de dos en dos (diez combinaciones), de menor a mayor peso (P0+P1, P0+P2, ?, .. , ?, P2+P4, P3+P4)
        int peso[5];        // Pesos de las carretas (de menor a mayor peso): P0 <= P1 <= P2 <= P3 <= P4
      int total_pesos = 0;  // Peso de todas las carretas
    // Lee de teclado los diez pesos de las parejas de carretas y de paso, calcula la suma de los pesos de parejas
    // La suma de los pesos de las cinco carretas es igual a la suma de todas las parejas entre 4
       for (int i = 0; i < 10; i++) {
            cin >> sumas_parejas[i];
            total_pesos = total_pesos + sumas_parejas[i];
        }
        total_pesos = total_pesos / 4;
    // Carreta de peso intermedio (P2) = Peso_total - (P0+P1 + P3+P4)
        peso[2] = total_pesos - (sumas_parejas[0] + sumas_parejas[9]);

    // Carreta más ligera (P0) = P0+P2 - P2
        peso[0] = sumas_parejas[1] - peso[2];

    // Segunda carreta más ligera (P1) = P0+P1 - P0
        peso[1] = sumas_parejas[0] - peso[0];
    
    // Carreta más pesada (P4) = P2+P4 - P2
        peso[4] = sumas_parejas[8] - peso[2];
    
    // Segunda carreta más pesada (P3) = P3+P4 - P4
        peso[3] = sumas_parejas[9] - peso[4];

    // Muestra el resultado (pesos de las carretas de mayor a menor)
        for (int i = 4; i > 0; i--) {
            cout << peso[i] << " ";
        }
        cout << peso[0] << "\n";

    } 
    return 0; 
  
}
