
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  bool solucion = false;
  for (int i = a; i <= b && !solucion; ++i) {
    for (int j = c; j <= d && !solucion; ++j) {
      double valor_n = sqrt(i * i + j * j);
      int num = int(valor_n);
      if (valor_n == double(num)) {
        cout << i << "^2 + " << j << "^2 = " << num << "^2" << endl;
        solucion = true;
      }
    }
  }
  if (!solucion) {
    cout << "No solution!" << endl;
  }
  return 0;
}