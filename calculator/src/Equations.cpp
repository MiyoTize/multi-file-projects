
// THIS CODE DOESNT WORK?

#include <iostream>
#include <cmath>

void first(double a, double b, double x) {
  int result;
  if(a == 0) {
    result = 0;
  } else {
    x = -b / a;
    result = 1;
  }
  return result;
}
int operfirst() {
  int result;
  double a, b, x;
  std::cout << "Please, write A and B:\n";
  std::cin >> a >> b;
  double endfirst = first(a, b, x);   
  if(result == 1) {
    std::cout << "Have 1 x:\n"
              << "\nX = " << x;
  } else {
    std::cout << "\nFuck! A = 0...\n"
              << "Dont have x\n";
  }  
}

int second(double a, double b, double c) {
  int result;
  double D, x1, x2;
  D = b * b - (4 * a * c); 
  if(a == 0) { 
    x1 = -c / b;
    result = 0; // Bx + C = 0
  } else if(b == 0 && c <= 0) {
    x1 = sqrt(-c);
    x2 = -sqrt(-c);
    result = 1; // Ax^2 + C = 0
  } else if(c == 0) {
    x1 = 0;
    x2 = -b / a;
    result = 2; // Ax^2 + Bx = 0\
  } else {
    if(D < 0) {
      result = 3; // Dont have x1 or x2
    } else if (D == 0) {
      x1 = -b / (2 * a);
      result = 4;
    } else {
      x1 = (-b + sqrt(D)) / (2 * a);
      x2 = (-b - sqrt(D)) / (2 * a);
      result = 5;
    }
  }
  return result;
}
void opersecond() {
  int result;
  int a, b, c, D, x1, x2;
  std::cout << "Please, write A, B and C:\n";
  std::cin >> a >> b >> c;
  double endsecond = second(a, b, c);
  if(result == 1 or 2 or 5) {
    std::cout << "Have 2 x:\n"
              << "x1 = " << x1 << "\n"
              << "x2 = " << x2 << "\n";
    return 0;
  } else if(result == 0 or 4) {
    std::cout << "Have 1 x:\n"
              << "x1 = " << x1 << "\n";
    return 0;
  } else {
    std::cout << "Fucking fail!\n"
	      << "No have x";
    return 0;
  }
} 

void Equations(double x1, double x2, double a, double b, double c, double D) {
  std::cout << "You in equationsolver\n"
            << "Please, write what you want solve:\n"
            << "1. Ax + B = 0\n"
            << "2. Ax^2 + Bx + C = 0\n"
            << "(1/2): ";
  int answer;
  std::cin >> answer;
  if(answer == 1) {
    int operfirst();
  } else if(answer == 2) {
    int opersecond();
  } else {
    std::cout << "\nFuckimg fail!\n";
  }
}
