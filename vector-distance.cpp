#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <sstream>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    std::string input;
    std::cin.ignore();
    std::getline(std::cin, input);

    std::vector<double> vec2;
    std::stringstream ss(input);
    double temp;
    while (ss >> temp) {
        vec2.push_back(temp);
    }

    if (vec2.size() != n) {
        std::cout << "Error: Vectors must be of the same size." << std::endl;
        return 1;
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    double result = std::sqrt(sum);
    std::cout << std::fixed << std::setprecision(14) << result << std::endl;

    return 0;
}