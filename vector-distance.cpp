```cpp
#include <cmath>
#include <vector>

double calculateDistance(const std::vector<float>& vector1, const std::vector<float>& vector2) {
    double sum = 0;
    for (int i = 0; i < vector1.size(); ++i) {
        sum += pow((vector1[i] - vector2[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    std::vector<float> v1(3); 
    v1[0] = 1.0f;
    v1[1] = 2.0f;
    v1[2] = 3.0f;

    std::vector<float> v2(3); 
    v2[0] = 4.0f;
    v2[1] = 5.0f;
    v2[2] = 6.0f;

    double result = calculateDistance(v1, v2);
    std::cout << "The distance between the two vectors is: " << result << std::endl;
    return 0;
}