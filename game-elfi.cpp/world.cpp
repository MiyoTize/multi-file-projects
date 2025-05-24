#include <iostream>

int wpoint, wwidth, wheight;

void world(wpoint([][wheight]) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(1, 10000);

  unsigned i, j;

  for (i = 0, i < wwidth, i++) {
    for (j = 0, j < wheight, j++) {
      unsigned int num = dis(gen);
      if (num % 2 == 0) {
        world[i][j].live = 1;
      } else {
        world[i][j].live = 0;
      }
    }
  }
}
