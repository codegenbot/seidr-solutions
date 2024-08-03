#include <iostream>
#include <vector>
#include <cmath>

int main() {
    double sum = 0.0;
    std::vector<double> vec1 = {1.0, 2.0, 3.0};
    std::vector<double> vec2 = {4.0, 5.0, 6.0};

    for (int i = 0; i < vec1.size(); ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }

    double distance = std::sqrt(sum);

    std::cout << "Euclidean distance: " << distance << std::endl;

    return 0;
}