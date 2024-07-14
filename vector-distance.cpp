```cpp
#include <vector>
#include <cmath>

double vectorDistance(int n, const std::vector<float>& x1, const std::vector<float>& x2) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        double diff = pow((x2[i] - x1[i]), 2);
        result += diff;
    }
    
    return sqrt(result); 
}

int main() {
    int n = 3;
    std::vector<float> x1({1.0f, 2.0f, 3.0f});
    std::vector<float> x2({4.0f, 5.0f, 6.0f});
    double distance = vectorDistance(n, x1, x2);
    std::cout << "Vector distance: " << distance << std::endl;
    return 0;
}