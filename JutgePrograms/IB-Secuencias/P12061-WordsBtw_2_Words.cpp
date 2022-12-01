
#include <iostream>
#include <string>
using namespace std;

int main() {
  string palabra;
  bool principio = false;
  int cont = 0;
  while (cin >> palabra && palabra != "end") {
    if (principio)
      ++cont;
    else if (palabra == "beginning")
      principio = true;
  }
  if (principio && palabra == "final") {
    cout << cont << endl;
  } else {
    cout << "wrong sequence" << endl;
  }
}