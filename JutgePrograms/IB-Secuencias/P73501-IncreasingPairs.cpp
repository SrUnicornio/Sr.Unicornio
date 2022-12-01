#include <iostream>
using namespace std;

int main() {
  int krepeat{0};
  cin >> krepeat;
  int knumero{0};
  int aux{0};
  for (int j = 0; j < krepeat; j++) {
    int suma{0};
    bool increase = false;
    while (cin >> knumero && knumero != 0) {
      if (increase) {
        if (aux < knumero) {
          suma++;
        }
      }
      aux = knumero;
      increase = true;
    }
    cout << suma << endl;
  }
}