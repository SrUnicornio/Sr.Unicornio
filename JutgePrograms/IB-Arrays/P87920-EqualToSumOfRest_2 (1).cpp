/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  P87920-EqualToSumOfRest_2.cc
 * @author Alvaro Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 21 2022
 * @brief Write a program that, given a sequence of integer numbers, tells if
 * there is any number equal to the sum of the rest.
 * @see https://jutge.org/problems/P87920
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int knumero;
  while (cin >> knumero) {
    vector<int> v(knumero);
    int suma = 0;
    for (int i = 0; i < knumero; ++i) {
      cin >> v[i];
      suma += v[i];
    }
    bool encontrado = false;
    int i = 0;
    while (!encontrado && i < knumero) {
      encontrado = (v[i] == suma - v[i]);
      ++i;
    }
    if (encontrado) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}