#include <iostream>
#include <string>
using namespace std;

int roman(char c) {
  if (c == 'I')
    return 1;
  else if (c == 'V')
    return 5;
  else if (c == 'X')
    return 10;
  else if (c == 'L')
    return 50;
  else if (c == 'C')
    return 100;
  else if (c == 'D')
    return 500;
  else
    return 1000;
}

int main() {
  string kroman_number;
  int suma{0};
  while (cin >> kroman_number) {
    int ksize_of_RN = kroman_number.size();
    for (int i = 0; i < ksize_of_RN - 1; i++) {
      if (kroman_number[i + 1] == '.') {
        suma += roman(kroman_number[i]);
      } else {
        if (roman(kroman_number[i + 1]) > roman(kroman_number[i])) {
          suma += roman(kroman_number[i + 1]) - roman(kroman_number[i]);
          i++;
        } else {
          suma += roman(kroman_number[i]);
        }
      }
    }
    kroman_number.pop_back();
    cout << kroman_number << " = " << suma << endl;
    suma = 0;
  }
}