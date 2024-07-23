```cpp
#include <vector>
#include <cmath>

double vectorDistance(std::vector<float> v1, std::vector<float> v2) {
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    std::vector<float> v1 = {1.0, 2.0, 3.0};
    std::vector<float> v2 = {4.0, 5.0, 6.0};

    double distance = vectorDistance(v1, v2);
    std::cout << "The distance is: " << distance << std::endl;
    
    return 0;
}