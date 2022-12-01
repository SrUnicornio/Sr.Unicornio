#include <iostream>
using namespace std;


int main() {
	int numero, seq1, seq, max;
	while (cin >> numero) {
		cin >> seq1;
		max = seq1;
		for (int i = 1; i < numero; ++i) {
			cin >> seq;
			if (seq > max) max = seq;
		}
		cout << max << endl;
	}
}