#include <iostream>
#include <vector>
#include <cmath>

int n;
std::cin >> n;
std::vector<float> vec1(n), vec2(n);
float distance = 0;

for (int i = 0; i < n; ++i) {
    distance += pow(vec1[i] - vec2[i], 2);
}
std::cout << sqrt(distance) << std::endl;