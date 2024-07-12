#include <iostream>
#include <vector>
#include <cmath>

double calculateEuclideanDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        sum += std::pow(vec1[i] - vec2[i], 2);
    }
    return std::sqrt(sum);
}

int main() {
    size_t n;
    std::cin >> n;
    
    std::vector<double> vec1;
    std::vector<double> vec2;
    
    double temp;
    while (std::cin >> temp) {
        vec1.push_back(temp);
        if (vec1.size() == n) break;
    }
    
    while (std::cin >> temp) {
        vec2.push_back(temp);
        if (vec2.size() == n) break;
    }

    double distance = calculateEuclideanDistance(vec1, vec2);

    std::cout << "Euclidean Distance: " << std::fixed << distance << std::endl;

    return 0;
}