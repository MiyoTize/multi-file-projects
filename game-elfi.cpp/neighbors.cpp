#include <iostream>

int wpoint, wheight, wwidth;

unsigned int live(wpoint[][wheight]) {
  unsigned int count = 0;
  unsigned i, j;
  for (i = 0; i < wwidth; ++i) {
    for (j = 0; j < wheight; ++j) {
      if (world[i][j].live == 1) {
        ++count;
      }
    }
  }
  return count;
}

void neighbors(signed int nb[][2], unsigned int x, unsigned int y) {
	// nb[][] is NeighBors
	// x - how much neighbors with main tile
	// y - how many tiles in radius of main tile 

  unsigned int i, j;
  unsigned int k = 0;

  for (i = x - 1; i <= x + 1; ++i) {
    for (j = y - 1; j <= y + 1; ++j) {
      if (i == x && j == y) {
        continue;
      }
    nb[k][0] = i;
    nb[k][1] = j;
    ++k;
    }
  }
}


unsigned int neighbors_M(wpoint[][wheight], unsigned int x, unsigned int y) { // Moore neighborhood
  unsigned int count = 0;
  unsigned int i;
  signed int nb[8][2];
	signed int _x, _y;

  neighbors(nb, x, y);

  for (i = 0; i < 8; ++i) {
    _x = nb[i][0];
    _y = nb[i][1];

    if (_x < 0 || _y < 0) {
      continue;
    }

    if (_x >= wwidth || _y >= wheight) {
      continue;
    }

    if (world[_x][_y].live == 1) {
		  ++count;
    }
  }
  return count;
}

unsigned int neighbors_N(wpoint[][wheight], unsigned int x, unsigned int y) { // Neumann neighborhood
  unsigned int count = 0;
  unsigned int i;
  signed int nb[4][2];
	signed int _x, _y;

  neighbors(nb, x, y);

  for (i = 0; i < 4; ++i) {
    _x = nb[i][0];
    _y = nb[i][1];

    if (_x < 0 || _y < 0) {
      continue;
    }

    if (_x >= wwidth || _y >= wheight) {
      continue;
    }

    if (world[_x][_y].live == 1) {
		  ++count;
    }
  }
  return count;
}
