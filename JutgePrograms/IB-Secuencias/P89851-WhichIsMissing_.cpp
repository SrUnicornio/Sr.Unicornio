#include <iostream>
using namespace std;

int main() {
  int ksize;
  int knumero;
  while (cin >> ksize) {
    int suma{0};
    for (int i = 0; i < ksize - 1; i++) {
      cin >> knumero;
      suma += knumero;
    }
    cout << ((ksize * (ksize + 1)) / 2) - suma << endl;
  }
}