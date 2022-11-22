/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  P50497-IsPalimdrome?.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 21 2022
 * @brief
 * @see https://jutge.org/problems/P50497
 */
#include <iostream>
using namespace std;

bool is_palindrome(const string &s) {
  int palin = s.length() - 1;
  for (int i = 0; i <= palin; ++i) {
    if (s[i] != s[palin])
      return false;
    --palin;
  }
  return true;
}

int main() {
  string palindromo;
  while (cin >> palindromo) {
    cout << is_palindrome(palindromo) << endl;
  }
}