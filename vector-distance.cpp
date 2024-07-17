#include <cmath>
#include <vector>

double calculateEuclideanDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    double sum = 0;
    if (vector1.size() != vector2.size()) {
        return -1; // or handle this case in any way you want
    }
    for (int i = 0; i < vector1.size(); ++i) {
        sum += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(sum);
}