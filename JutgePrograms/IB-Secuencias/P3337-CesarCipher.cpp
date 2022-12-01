#include <iostream>
using namespace std;

char encode(char c, int k) {
  if (c == '_') {
    c = ' ';
  } else if ('a' <= c && c <= 'z') {
    c -= 'a';
    if (k > 26) {
      k = k % 26;
    }
    c += 'A' + k;
    while (c > 'Z') {
      c -= 26;
    }
  }
  return c;
}

int main() {
  char cadena;
  int encript;
  while (cin >> encript) {
    while (cin >> cadena && cadena != '.')
      {   cout << encode(cadena, encript);}
    cout<<endl;
  }
}