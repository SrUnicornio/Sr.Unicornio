#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int repeat;
  cin >> repeat;
  for (int i = 0; i < repeat; ++i) {
    int size{0};
    while (cin >> size) {
      double suma{0};
      vector<double> V(size);
      for (int j = 0; j < size; ++j) {
        cin >> V[j];
        suma += V[j];
      }
      auto res = minmax_element(V.begin(), V.end());
      double min = *res.first;
      double max = *res.second;
      cout << fixed << setprecision(4) << min << " " << max << " "
           << suma / V.size() << endl;
    }
  }
  return 0;
}