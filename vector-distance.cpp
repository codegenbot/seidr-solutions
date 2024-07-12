#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    std::stringstream ss;
    std::string input;
    std::cin >> input;
    ss << input;

    std::vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        std::getline(ss, input, ',');
        vec2[i] = std::stod(input);
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    double result = std::sqrt(sum);
    std::cout << std::fixed << std::setprecision(15) << result << std::endl;

    return 0;
}