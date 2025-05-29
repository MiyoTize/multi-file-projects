
// DOESNT WORK!

#include <iostream>

int TodoListArray(char* array[i]) {
  int i, choice;
  int x =0;
  if(i == 0) {
    std::cout << "Oops! You no have tasks!\n";
  } else {
		x = 0;
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
			std::cin >> array[++i];
      ++i;
		} else {
			std::cout << "Write number of task\nHere: ";
			std::cin >> x;
			array[x] = 0;
    }
	}
}
    
