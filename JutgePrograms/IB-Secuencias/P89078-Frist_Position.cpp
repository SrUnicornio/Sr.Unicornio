
#include <iostream>
using namespace std;

int main() {
    int secuencia{0}, i{1};
    while (cin >> secuencia and secuencia%2 != 0) {
        ++i;
    }
    cout << i << endl;
return 0;
  }
