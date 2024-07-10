```cpp
#include <cmath>
#include <vector>

double calculateDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    double sum = 0;
    int n = std::accumulate(vector1.begin(), vector1.end(), 0);
    for (int i = 0; i < n; ++i) {
        sum += pow((vector1[i] - vector2[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    std::vector<float> v1({1.0, 2.0, 3.0});
    std::vector<float> v2({4.0, 5.0, 6.0});
    double result = calculateDistance(v1, v2);
    std::cout << "The distance between the two vectors is: " << result << std::endl;
    return 0;
}