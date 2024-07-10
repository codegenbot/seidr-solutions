```c++
#include <cmath>
#include <vector>

double calculateDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    double distance = 0.0;
    for (int i = 0; i < vector1.size(); ++i) {
        float diff = (vector1[i] - vector2[i]) * (vector1[i] - vector2[i]);
        distance += diff;
    }
    return std::sqrt(distance);
}

int main() {
    float v1[] = {1.0, 2.0, 3.0};
    float v2[] = {4.0, 5.0, 6.0};
    double result = calculateDistance(std::vector<float>(v1, v1 + sizeof(v1) / sizeof(v1[0])), std::vector<float>(v2, v2 + sizeof(v2) / sizeof(v2[0])));
    std::cout << "The distance between the two vectors is: " << result << std::endl;
    return 0;
}