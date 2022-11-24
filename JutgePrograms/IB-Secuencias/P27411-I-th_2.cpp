
#include <iostream>
using namespace std;

int main() {
  int numero, secuencia, i{1};
  cin >> numero;
  while (cin >> secuencia && i != numero && secuencia != -1) {
    ++i;
  }
  if (i <= 0 || numero > i || numero <= 0 || secuencia < 0) {
    cout << "Incorrect position." << endl;
  } else {
    cout << "At the position " << numero << " there is a(n) " << secuencia
         << "." << endl;
  }
  return 0;
}