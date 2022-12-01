#include <iostream>
#include <string>
using namespace std;

int main() {
  string first;
  cin >> first;
  string second;
  int max{1};
  int cont{1};
  while (cin >> second) {
    if (first != second) {
      cont = 0;
    } else {
      ++cont;
      if (cont > max) {
        max = cont;
      }
    }
  }
  cout << max << endl;
}