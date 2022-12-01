
#include <iostream>
using namespace std;

int main() {
  char caracter;
  cin >> caracter;
  bool hello = false;
  while (caracter != '.') {
    if (caracter == 'h') {
      cin >> caracter;
      if (caracter == 'e') {
        cin >> caracter;
        if (caracter == 'l') {
          cin >> caracter;
          if (caracter == 'l') {
            cin >> caracter;
            if (caracter == 'o')
              hello = true;
          }
        }
      }
    } else
      cin >> caracter;
  }
  if (hello)
    cout << "hello";
  else
    cout << "bye";
  cout << endl;
}