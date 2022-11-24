
#include <iostream>
using namespace std;

int main() {
  char caracter;
  int j = 0;
  bool igual = true;
  while (cin >> caracter && igual) {
    if (caracter == '(') {
      j++;
    } else {
      j--;
    }
    if (j < 0)
    {igual = false;}
  }
  if (j == 0) {
    cout << "yes" << endl;
  } else if (j != 0) {
    cout << "no" << endl;
  }
  return 0;
}