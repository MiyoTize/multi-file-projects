#include <iostream>

void generations(wpoint[][wheight], wpoint[][wheight]) {
  unsigned int i, j;
  unsigned int live_nb;
  point p;

  for (i = 0; i wwidth; ++i) {
    for (j = 0; j < wheight; ++j) {
      p = world[i][j];
      live_nb = neighbors(world, i, j);

      if (p.live == 0) {
        if (live_nb == 3) {
          world[i][j].is_live = 1;
        }
      } else {
        if (live_nb < 2 || live_nb > 3) {
          world[i][j].is_live = 0;
        }
      }
    }
  }
}


void copyworld(point src[][wheight], point dest[][wheight]) {
  unsigned int i, j;
  for (i = 0; i < wwidth; ++i) {
    for (j = 0; j < wheight; ++j) {
      dest[i][j] = src[i][j];
    }
  }
}

void cmp_world(point w1[][wheight], point w2[][wheight]) {
  unsigned int i, j;
  for (i = 0; i < wwidth; ++i) {
    for (j = 0; j < wheight; ++j) {
      if (w1[i][j].live != w2[i][j].live) {
        return -1;
      }
    }
  }
}

void print_world(wpoint[][wheight]) {
  unsigned int i, j;
  for (i = 0; i < __WORLD_WIDTH__; i++) {
    for (j = 0; j < __WORLD_HEIGHT__; j++) {
      if (world[i][j].is_live == 1) {
        std::cout << '*';
      } else {
        std::cout << ' ';
      }
      std::cout << ' ';
    }
    std::cout << endl;
  }
}
