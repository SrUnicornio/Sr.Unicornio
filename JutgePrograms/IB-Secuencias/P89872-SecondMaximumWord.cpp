#include <iostream>
#include <string>
using namespace std;

int main() {
  string aux, cadena1, cadena2;
  cin >> cadena1 >> cadena2;
  while (cadena1 == cadena2) {
    cin >> cadena1;
  }
  if (cadena1 > cadena2) {
    aux = cadena2;
    cadena2 = cadena1;
    cadena1 = aux;
  }
  while (cin >> aux) {
    if (aux < cadena2) {
      if (aux > cadena1) {
        cadena1 = aux;
      }
    } else if (aux != cadena2) {
      cadena1 = cadena2;
      cadena2 = aux;
    }
  }
  cout << cadena1 << endl;
}