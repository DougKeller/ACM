#include <iostream>

int main() {
  std::string input;
  std::cin >> input;

  char x = input[0];
  char y = input[1];

  bool xInBound = x > 'a' & x < 'h';
  bool yInBound = y > '1' & y < '8';

  if(xInBound & yInBound) {
    std::cout << 8;
  } else if(xInBound | yInBound) {
    std::cout << 5;
  } else {
    std::cout << 3;
  }
}