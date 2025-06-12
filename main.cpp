#include "halton.hpp"
#include <array>
#include <iostream>

int main() {
  constexpr unsigned int n = 10;         // Number of points to generate
  constexpr unsigned int dimensions = 3; // Number of dimensions

  unsigned long long sequence_count = 0; // Sequence counter
  std::array<double, dimensions> point;

  for (unsigned int i = 0; i < n; ++i) {
    halton::generate(point, ++sequence_count);
    std::cout << "Point " << i << ": (";
    for (unsigned int j = 0; j < dimensions; ++j) {
      if (j > 0) std::cout << ", ";
      std::cout << point[j];
    }
    std::cout << ")\n";
  }

  return 0;
}
