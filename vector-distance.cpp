```cpp
#include <cmath>
#include <vector>
#include <iostream>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow((float)v1[i] - (float)v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    std::vector<float> v1 = {1, 2, 3};
    std::vector<float> v2 = {4, 5, 6};
    double dist = vectorDistance(v1, v2);
    std::cout << "Vector distance: " << dist << std::endl;
    return 0;
}