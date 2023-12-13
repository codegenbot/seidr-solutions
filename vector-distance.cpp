#include <vector>
#include <iostream>
#include <sstream>
#include <cmath>

double euclideanDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); i++) {
        double diff = vec1[i] - vec2[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::string line;

    std::getline(std::cin, line);
    std::stringstream ss(line);
    std::vector<double> vec1;
    while (ss >> n) {
        vec1.push_back(n);
    }

    std::getline(std::cin, line);
    ss = std::stringstream(line);
    std::vector<double> vec2;
    while (ss >> n) {
        vec2.push_back(n);
    }

    double distance = euclideanDistance(vec1, vec2);
    std::cout << distance << std::endl;

    return 0;
}