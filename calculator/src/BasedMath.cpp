#include <iostream>
#include <cmath>

void BasedMath(double x, double y, int z) { // z is out
  std::cout << "Please, write x and y:\n";
  std::cin >> x >> y;

  std::cout << "x + y = " << x + y << "\n"
            << "x - y = " << x - y << "\n"
            << "y - x = " << y - x << "\n"
            << "x * y = " << x * y << "\n"
            << "pow(x, y) = " << pow(x, y) << "\n"
            << "pow(y, x) = " << pow(y, x) << "\n"
            << "round(x) = " << round(x) << "\n"
            << "round(y) = " << round(y) << "\n";

  if(x>=0 && y>=0) {
  std::cout << "sqrt(x) = " << sqrt(x) << "\n"
            << "sqrt(y) = " << sqrt(y) << "\n";
  } else {
    std::cout << "(sqrt): Fucking fail!" << "\n";
    return 0;
  }

  if(x>=0 && y>=0) {
    std::cout << "log(x) = " << log(x) << "\n"
              << "log(y) = " << log(y) << "\n";
  } else {
    std::cout << "(log): Fucking fail!" << "\n";
    return 0;
  }

  if(x!=0 && y!=0) {
    std::cout << "x / y = " << x / y << "\n" 
              << "y / x = " << y / x << "\n"; 
  }
  else {
    std::cout << "(/): Fucking fail!" << "\n";
    return 0;
  }
}
