
#include <iostream>
using namespace std;

bool es_primo(int n) {
  if (n < 2) {
    return false;
  }
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int numero;
  while (cin >> numero && es_primo(numero)) {
    bool primer = false;
    int next = numero + 1;
    while (!primer) {
      primer = es_primo(next);
      if (primer)
        cout << next << endl;
      else
        ++next;
    }
  }
}