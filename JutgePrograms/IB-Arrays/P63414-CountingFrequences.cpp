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
/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  P63414-CountingFrequences.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 21 2022
 * @brief Write a program that reads a sequence of natural numbers and that prints, for each one, how many times it appears.
Input consists of a natural number n, followed by n natural numbers between 1000000000 and 1000001000 (both included).
 * @see https://jutge.org/problems/P63414
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int knumero;
    cin >> knumero;
    int actual;
    vector<int> contador(1001, 0);
    for (int i = 0; i < knumero; i++) {
        cin >> actual;
        contador[actual-1000000000]++;
    }
    for (int i = 0; i < 1001; i++) {
        if (contador[i] != 0) {
            cout << 1000000000+i << " : " << contador[i];
            cout << endl;
         }
    }
  return 0;
}