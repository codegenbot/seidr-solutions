#include <cmath>
#include <vector>

double calculateEuclideanDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    double sum = 0;
    if (vector1.size() != vector2.size()) {
        return -1; 
    }
    for (int i = 0; i < vector1.size(); ++i) {
        sum += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    std::vector<float> vec1 = {1.0, 2.0, 3.0};
    std::vector<float> vec2 = {4.0, 5.0, 6.0};
    double dist = calculateEuclideanDistance(vec1, vec2);
    return 0;
}