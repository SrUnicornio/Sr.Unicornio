#include <iostream>
using namespace std;

void romanunit(int n, char I, char V, char X) {
	if (n == 0);
	else if (n == 1) cout << I; 
	else if (n == 2) cout << I << I;
	else if (n == 3) cout << I << I << I; 
	else if (n == 4) cout << I << V;
	else if (n == 5) cout << V;
	else if (n == 6) cout << V << I; 
	else if (n == 7) cout << V << I << I;
	else if (n == 8) cout << V << I << I << I;
	else if (n == 9) cout << I << X;
	else cout << X;		
}

int main() {
	int knumero;
	while (cin >> knumero) {
		cout << knumero << " = ";
		romanunit(knumero/1000, 'M', ' ', ' '); 
		romanunit(knumero/100 - (knumero/1000)*10, 'C', 'D', 'M');
		romanunit(knumero/10 - (knumero/100)*10, 'X', 'L', 'C');
		romanunit(knumero%10, 'I', 'V', 'X');
		cout << endl;
	}
}