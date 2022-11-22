/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  P24301-ConcatenationVertors.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 21 2022
 * @brief Write a function that returns the concatenation of v1 and v2. That is,
 * you must return a vector with the elements of v1 followed by the elements of
 * v2.
 * @see https://jutge.org/problems/P24301
 */
#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenation(const vector<int> &v1, const vector<int> &v2) {
  vector<int> V = v1;
  for (int i = 0; i < v2.size(); ++i) {
    V.push_back(v2[i]);
  }
  return V;
}

int main() {
  int vector1;
  while (cin >> vector1) {
    vector<int> V1(vector1);
    for (int i = 0; i < vector1; ++i) {
      cin >> V1[i];
    }
    int vector2;
    cin >> vector2;
    vector<int> V2(vector2);
    for (int i = 0; i < vector2; ++i) {
      cin >> V2[i];
    }
    vector<int> res = concatenation(V1, V2);
    cout << res.size() << endl;
    for (int i = 0; i < (int)res.size(); ++i) {
      cout << " " << res[i];
    }
    cout << endl;
  }
}