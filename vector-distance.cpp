#include <iostream>
#include <cmath>

int main() {
    double sum = (vec1[0] - vec2[0]) * (vec1[0] - vec2[0]) + (vec1[1] - vec2[1]) * (vec1[1] - vec2[1]) + ...; // Sum of squared differences
    double distance = std::sqrt(sum);
    std::cout << distance << std::endl;
    return 0;
}