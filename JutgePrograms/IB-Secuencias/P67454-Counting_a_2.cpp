
#include <iostream>
using namespace std;

int main() {
  int numero_a{0};
  char letra_a;
  while (cin >> letra_a && letra_a != '.') {
    if (letra_a == 'a') {
      numero_a++;
    }
  }
  cout << numero_a << endl;
}