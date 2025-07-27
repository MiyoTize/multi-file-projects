#include <iostream>

void ArithmeticProgression(double a, double b, double s, double result, int n) {
  int choice;
  std::cout << "Your choice:"
/*@,0*/     << "Arithmetic Progression"
/*Sourface*/<< "What you want find?"
/*Crazey*/  << "1. S"
/*Tizey */  << "2. A"
/*The lazy*/<< "3. B"
/*Kombucha*/<< "4. N"
/*Here yo!*/<< "Please, write number here: ";
  std::cin >> choice;
  switch(choice) {
    case 1:
      std::cout << "\nWrite a, b and n: ";
      std::cin >> a >> b >> n;
      if(n!=1 && b!=0) {
        result = a + b*(n-1); // sum
      } else {
        std::cout << "Fucking failed!";
        return 0;
      }

    case 2:
      std::cout << "\nWrite s, b and n: ";
      std::cin >> s >> b >> n;
      if(n!=1 && b!=0) {  
        result = s - b*(n-1); // first penis
      } else {
        std::cout << "Fucking failed!";
        return 0;
      }

    case 3:
      std::cout << "\nWrite s, a and n: ";
      std::cin >> s >> a >> n;
      if(n!=0 && a!=0 && s!=0) {  
        result = s / (a * n); // diff
      } else {
        std::cout << "Fucking failed!";
        return 0;
      }

    case 4:
      std::cout << "\nWrite s, a and b: ";
      std::cin >> s >> a >> b;
      int z = s - a; // the костыль for if
      if(z!=0 && b!=0) {  
        result = (s - a) / b; // quantity
      } else {
        std::cout << "Fucking failed!";
        return 0;
      }
  }
}
