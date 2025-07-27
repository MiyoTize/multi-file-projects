#include <iostream>
#include "Text.h"
#include "BasedMath.h"
#include "ArithmeticProgression.h"
#include "Equations.h"

int main() {
  int z;
  Text(int answer);
  std::cout << "Start?\n(Y/n): ";
  std::cin >> z;
  while (z == 'y') {
    switch(answer) {
      case 1:
        BasedMath(double x, double y);
      case 2:
        ArithmeticProgression(double a, double b, double s, double result, int n);
      case 3:
        Equations(double x1, double x2, double a, double b, double c, double D);
    }
    std::cout << "Do you want solve something again?\n(Y/n): ";
    std::cin >> z;
  }
  return 0;
}
