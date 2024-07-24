#include <cmath>
#include <vector>

double euclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    int min_len = std::min(v1.size(), v2.size());
    for (int i = 0; i < min_len; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    return sqrt(sum);
}

int main() {
    std::vector<float> v1 = {1, 2, 3};
    std::vector<float> v2 = {4, 5, 6};
    double distance = euclideanDistance(v1, v2);
    std::cout << "Euclidean Distance: " << distance << std::endl;
    return 0;
}