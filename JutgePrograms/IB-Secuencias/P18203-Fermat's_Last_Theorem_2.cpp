
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  bool found = false;
  int a, b, c, d;
  int x, y, z;
  while (cin >> a >> b >> c >> d) {
    if (a <= b && c <= d) {
      if ((a == 0 || c == 0) && !found) {
        found = true;
        z = a + c;
        x = a;
        y = c;
      }
    }
  }
  if (found)
    cout << x << "^3 + " << y << "^3 = " << z << "^3" << endl;
  else
    cout << "No solution!" << endl;
}