#include <iostream>

int Text() {
	int answer;
  std::cout << "Heyo! Here Miyo!\n"
            << "Please, write what you want:\n"
						<< "1. Based Math ( + - * / ^ sqrt pow log round % ! )\n"
						<< "Write here: ";
	std::cin >> answer;
	if (answer < 1 && answer > 1) { // bcs now here only one variant
    std::cout << "Fucking fail!";
		return 0;
  }
}
  

