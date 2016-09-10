#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

int sumOfDistances(int value, std::vector<int> elements) {
  int sum = 0;
  for(auto it = elements.begin(); it < elements.end(); it++) {
    sum += std::abs(value - *it);
  }
  return sum;
}

int main() {
  int numElements;
  std::cin >> numElements;

  std::vector<int> elements = std::vector<int>();
  while (numElements > 0) {
    int value;
    std::cin >> value;
    elements.push_back(value);
    numElements--;
  }

  int minSum = std::numeric_limits<int>::max();
  int pointValue;

  for(std::vector<int>::iterator it = elements.begin(); it < elements.end(); it++) {
    int sum = sumOfDistances(*it, elements);
    if (sum < minSum || (sum == minSum && *it < pointValue)) {
      minSum = sum;
      pointValue = *it;
    }
  }

  std::cout << pointValue;
}