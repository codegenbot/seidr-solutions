#include <cmath>
#include <vector>

double euclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    int min_len = std::min(v1.size(), v2.size());
    for (int i = 0; i < min_len; i++) {
        sum += pow(std::abs(v2[i] - v1[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    std::vector<float> v1 = {1.0, 2.0, 3.0};
    std::vector<float> v2 = {4.0, 5.0, 6.0};
    double distance = euclideanDistance(v1, v2);
    // use the returned distance
}