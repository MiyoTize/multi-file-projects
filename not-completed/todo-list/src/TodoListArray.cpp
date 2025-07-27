
// DOESNT WORK!

#include <iostream>

void TodoListArray() {
	char array[i]{};
  int i, choice;
  int x = 0;
  char* task;
  char answerarr;
  if(i == 0) {
    std::cout << "Oops! You no have tasks!\n";
  } else {
    x = 1;
    while( x <= i ) {
      std::cout << x << ". " << array[i-x];
      ++x;
    }
  }
  while(answerarr == 'y') {
    std::cout << "What do you want?\n"
              << "1. add task\n"
              << "2. delete task yaaay\n";
    std::cin >> choice;
    if(choice == 1) { 
      std::cout << "Write task\nHere: ";
      ++i;
      std::cin >> task;
      array[i] = task;
    } else {
      std::cout << "Write number of task\nHere: ";
      std::cin >> i;
      array[i] = 0;
    }
  }
}
