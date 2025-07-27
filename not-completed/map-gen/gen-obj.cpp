#include <iostream>
#include <random>
using std::cout, std::cin;

void GenSpace() 
{ // dont give a fuck bcs here similar tiles
  uint32_t k; // coefficient of spawning (0-9)
  uint32_t h, w; // height and width
  cout << "\nWrite k, h and w: ";
  cin >> k >> h >> w;
  cout << "\nK = " << k << ", H = " << h << ", W = " << w << "\n";
  uint32_t matrix[h][w];
  for(uint32_t i = 0; i < h; ++i) {
    cout << "\n";
    for(uint32_t j = 0; j < w; ++j) {
      matrix[i][j] = rand() % 10;
      if (matrix[i][j] < k) {
        matrix[i][j] = 0;
      }
      cout << matrix[i][j] << ' ';
    }
  }
};

int main() {
  GenSpace();
  return 0;
}
