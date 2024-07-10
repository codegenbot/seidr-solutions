#include <vector>
#include <cmath>
#include <stdexcept>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    if(v1.size() != v2.size()) {
        throw std::runtime_error("Vectors of different sizes");
    }
    
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        float diff = v1[i] - v2[i];
        sum += static_cast<double>(diff) * static_cast<double>(diff);
    }
    return sqrt(sum);
}

int main() {
    std::vector<float> v1{1.0, 2.0, 3.0};
    std::vector<float> v2{4.0, 5.0, 6.0};
    try {
        double distance = vectorDistance(v1, v2);
        std::cout << "Euclidean Distance: " << distance << std::endl;
    } catch(const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}