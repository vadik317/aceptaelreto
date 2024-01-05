#include <iostream>
using namespace std;
int main() {

  unsigned int numCasos;

  cin >> numCasos;
  for (unsigned int i = 0; i < numCasos; ++i) {
    int t;
    cin >> t;
    int h;
    int m;
    int s;
    string h1;
    string m1;
    string s1;
    h = (int)t/3600;
    t = t-h*3600;
    m = (int)t/60;
    t = t-m*60;
    s = t;
    h1 = to_string(h);
    m1 = to_string(m);
    s1 = to_string(s);
    if (h < 10) {
        h1 = "0"+to_string(h);
    }
    if (m < 10) {
        m1 = "0"+to_string(m);
    }
    if (s < 10) {
        s1 = "0"+to_string(s);
    }
    cout<<h1<<":"<<m1<<":"<<s1<<"\n";
  }

  return 0;

} 
