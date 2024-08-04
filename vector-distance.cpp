#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<double> vec1, vec2;
    double val;

    while (std::cin >> val) {
        vec1.push_back(val);
        vec2.push_back(val);
    }

    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    double result = sqrt(sum);
    std::cout << result << std::endl;

    return 0;
}