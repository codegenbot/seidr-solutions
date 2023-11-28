#include <iostream>
#include <vector>
#include <cmath>

double euclideanDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sum = 0.0;
    for (size_t i = 0; i < vec1.size(); i++) {
        sum += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<double> temp1(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> temp1[i];
    }

    size_t m;
    std::cin >> m;

    std::vector<double> temp2(m);
    for (size_t i = 0; i < m; i++) {
        std::cin >> temp2[i];
    }
    
    double distance = euclideanDistance(temp1, temp2);
    std::cout << distance;

    return 0;
}