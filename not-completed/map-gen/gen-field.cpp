#include <iostream>
#include <random>
using std::cout, std::cin;

void gen() {
  cout << "\nWrite k, h and w: ";
  uint32_t k, h, w; // coef., height and width
  cin >> k >> h >> w;
  uint32_t matrix[h][w];
  for(uint32_t i = 0; i < h; ++i) {
    cout << "\n";
    for(uint32_t j = 0; j < w; ++j) {
      matrix[i][j] = rand() % k;
      cout << matrix[i][j] << ' ';
    }
  }
};

int main() {
  gen();
  return 0;
}
