#include <vector>
#include <cmath>

double calculateDistance(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double sum = 0.0;
    for (std::size_t i = 0; i < vec1.size(); ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }
    return std::sqrt(sum);
}

int main() {
    return 0; // Placeholder main function
}