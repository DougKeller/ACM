#include <iostream>
#include <cmath>

int main() {
  long long tileSize, width, height;
  std::cin >> width >> height >> tileSize;

  long long horizontalTiles = ceil((double) width / tileSize);
  long long verticalTiles = ceil((double) height / tileSize);

  std::cout << (horizontalTiles * verticalTiles);
}