#include <iostream>
#include "Fun.h"
#include "Text.h"

int main() {
  int z;
  Text();
  std::cout << "Start?\n(Y/n): ";
  std::cin >> z;
  while (z == 'y') {
    Fun();
    std::cout << "Do you want solve something again?\n(Y/n): ";
  std::cin >> z;
  }
  return 0;
}
