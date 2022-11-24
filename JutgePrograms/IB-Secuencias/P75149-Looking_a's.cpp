
#include <iostream>
using namespace std;

int main() {
  char cadena;
  bool hay_a = false;
  while (cin >> cadena && cadena != '.') {
    if (cadena == 'a') {
      hay_a = true;
    }
  }
  if (hay_a) {
    cout << "yes";
  } else {
    cout << "no";
  }
  cout << endl;
}