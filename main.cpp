#include <string>
#include <algorithm>
#include <iostream>
#include "main.h"

using std::string;
using std::cin;
using std::cout;
using std::reverse;
using std::endl;


int main() {
  int x, b;
  cout << "Enter a Decimal number: ";
  cin >> x;
  cout << "Target base: ";
  cin >> b;
  cout << endl;
  cout << "Number in requested base: " << toBase(x, b) << endl;
}


string toBase(int x, int b) {
  string a;
  for (int i=0; x>0; i++) {
    int d = x % b;
    x = (x - d) / b;
    a.push_back(toDigit(d));
  }
  reverse(a.begin(), a.end());
  return a;
}


inline char toDigit(int x) {
  if (x < 10)
    return '0' + x;
  else
    return 'A' + (x - 10);
}
