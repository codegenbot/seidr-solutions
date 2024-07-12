#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vec1(n), vec2(n);
    std::string input;
    std::getline(std::cin >> std::ws, input);

    std::stringstream ss(input);
    char ch;
    for (int i = 0; i < n; ++i) {
        ss >> vec1[i] >> ch;
    }

    std::getline(std::cin >> std::ws, input);
    ss.clear();
    ss.str(input);
    for (int i = 0; i < n; ++i) {
        ss >> vec2[i] >> ch;
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }

    double result = std::sqrt(sum);
    std::cout << result << std::endl;

    return 0;
}