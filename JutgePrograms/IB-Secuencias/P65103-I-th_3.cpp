
#include <iostream>
using namespace std;

int main() {
  int secuencia{0}, numero{0},  i{1}, aux{0};;
  cin >> numero;
  bool incorrect = true;
  while (cin >> secuencia && secuencia != -1) {
    if (i == numero) {
      aux = secuencia;
      incorrect = false;
    }
    ++i;
  }
  if (!incorrect) {
    cout << "At the position " << numero << " there is a(n) " << aux << "." << endl;
  } else {
    cout << "Incorrect position." << endl;
  }
  return 0;
}