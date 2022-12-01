#include <iostream>
using namespace std;

int main() {
  int ksize, knumero, max;
  while (cin >> ksize) {
    int suma{0};
    for (int i = 0; i < ksize; i++) {
      cin >> knumero;
      suma += knumero;
      if (i != 0) {
        if (max < knumero) {
          max = knumero;
        }
      } else {
        max = knumero;
      }
    }
    if (suma - max == max)
      {cout << "YES" << endl;}
    else
    {cout << "NO" << endl;}
  }
}