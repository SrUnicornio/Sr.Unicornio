
#include <iostream>
using namespace std;

int main() {
    int numero, secuencia, i{1};
    cin >> numero;
    while (cin >> secuencia && i != numero && secuencia != -1) {
        ++i;
        
    }
    cout << "At the position " << numero << " there is a(n) " << secuencia << "." << endl;
}