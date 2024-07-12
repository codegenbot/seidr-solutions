#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

double calculateEuclideanDistance(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }
    return std::sqrt(sum);
}

int main() {
    size_t n;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    std::vector<float> vec1(n);
    std::vector<float> vec2(n);
    
    std::string input;
    std::getline(std::cin, input, ',');

    std::stringstream ss(input);
    for (size_t i = 0; i < n; ++i) {
        ss >> vec1[i];
    }

    std::getline(std::cin, input, ',');
    ss.str("");
    ss.str(input);
    ss.clear();
    for (size_t i = 0; i < n; ++i) {
        ss >> vec2[i];
    }

    double distance = calculateEuclideanDistance(vec1, vec2);

    std::cout << "Euclidean Distance: " << std::fixed << distance << std::endl;

    return 0;
}