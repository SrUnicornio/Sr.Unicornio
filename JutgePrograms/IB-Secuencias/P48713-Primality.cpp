
#include <iostream>
using namespace std;

bool is_prime(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  if (n == 0 or n == 1) {
    return false;
  }
  return true;
}

int main() {
  int numero;
  cin >> numero;
  int secuencia;
  for (int i = 0; i < numero; i++) {
    if (cin >> secuencia) {
      if (is_prime(secuencia)) {
        cout << secuencia << " is prime" << endl;
      } else {
        cout << secuencia << " is not prime" << endl;
      }
    } else {
      cout << "0 is not prime" << endl;
    }
  }
  return 0;
}