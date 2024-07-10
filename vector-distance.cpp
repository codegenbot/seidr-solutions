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
    std::vector<float> v1(3); v1[0] = 1.0; v1[1] = 2.0; v1[2] = 3.0;
    std::vector<float> v2(3); v2[0] = 4.0; v2[1] = 5.0; v2[2] = 6.0;
    double result = calculateDistance(v1, v2);
    std::cout << "The distance between the two vectors is: " << result << std::endl;
    return 0;
}