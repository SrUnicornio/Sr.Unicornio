
#include <iostream>
using namespace std;

bool par(int n) {
  int i{1};
  int d{10};
  while (d <= n) {
    d *= 10;
    ++i;
  }
  if (i % 2 == 0) {
    return true;
  }
  return false;
}

int middig(int n) {
  int producto = 1;
  while (producto * producto * 10 < n) {
    producto *= 10;
  }
  return (n / producto) % 10;
}

int main() {
  int nombre, numero, secuencia;
  cin >> nombre;
  bool lost = false;
  char quien;
  cin >> secuencia;
  if (par(secuencia)) {
    lost = true;
  }
  int aux = middig(secuencia);
  int i = 1;
  while (!lost && i < 2 * nombre) {
    cin >> numero;
    if (par(numero)) {
      lost = true;
    } else {
      int mitad = middig(numero);
      if (aux != mitad) {
        lost = true;
      }
    }
    ++i;
  }
  if (lost) {
    if (i % 2 == 0) {
      quien = 'A';
    } else {
      quien = 'B';
    }
  } else {
    quien = '=';
  }
  cout << quien << endl;
}