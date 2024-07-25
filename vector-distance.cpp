#include <iostream>
#include <vector>
#include <cmath>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    if(v1.size() != v2.size()) {
        std::cerr << "Error: Vectors must be of the same size." << std::endl;
        return -1.0; // Return an error value
    }

    double sum = 0.0;

    for(int i = 0; i < v1.size(); i++) {
        sum += pow((v1[i] - v2[i]), 2);
    }

    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> v1(n);
    for(float& f : v1) {
        std::cin >> f;
    }

    std::cin >> n;

    std::vector<float> v2(n);
    for(float& f : v2) {
        std::cin >> f;
    }

    double dist = vectorDistance(v1, v2);

    std::cout << std::setprecision(10) << dist << std::endl;

    return 0;
}