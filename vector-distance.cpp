#include <stdexcept>
#include <vector>
#include <cmath>

double vectorDistance(std::vector<float> v1, std::vector<float> v2) {
    if (v1.size() != v2.size()) {
        throw std::invalid_argument("Vectors must be the same size");
    }
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        double diff = v2[i] - v1[i];
        sum += diff * diff;
    }
    
    return std::sqrt(sum);
}

int main() {
    std::vector<float> v1 = {1.0, 2.0, 3.0};
    std::vector<float> v2 = {4.0, 5.0, 6.0};
    try {
        double distance = vectorDistance(v1, v2);
        std::cout << "The Euclidean distance between the two vectors is: " << distance << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}