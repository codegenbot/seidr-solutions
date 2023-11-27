#include <iostream>

float C(float h, float i, float r, float m) {
  float s = i;
  for (int j = 0; j <= static_cast<int>(h); j++) {
    s += r;
    s *= (1 - m);
  }
  return s;
}

int main() {
  float h, i, r, m;
  std::cin >> h >> i >> r >> m;
  std::cout << C(h, i, r, m) << std::endl;
}