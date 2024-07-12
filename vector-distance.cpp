#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vec1(n), vec2(n);
    std::string input;
    std::getline(std::cin >> std::ws, input);
    std::stringstream ss(input);

    for (int i = 0; i < n; ++i) {
        ss >> vec1[i];
    }

    std::getline(std::cin >> std::ws, input);
    ss.str(input);
    ss.clear();

    for (int i = 0; i < n; ++i) {
        ss >> vec2[i];
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    double result = std::sqrt(sum);
    std::cout << std::fixed << std::setprecision(17) << result << std::endl;

    return 0;
}