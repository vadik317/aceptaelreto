#include <iostream>
using namespace std;
int main() {
  int numCasos, tanques, cap, resta;
  cin >> numCasos;
  for (unsigned int i = 0; i < numCasos; ++i) {
    cin >> tanques >> cap >> resta;
    cout << cap*tanques-resta*((tanques*(tanques-1))/2) << "\n";
  }
  return 0;
}
