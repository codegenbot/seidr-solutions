```cpp
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

double vectorDistance(int n, const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> v1(n, 0), v2(n, 0); 
    for (int i = 0; i < n; i++) {
        std::cin >> v1[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> v2[i];
    }
    std::cout << std::fixed << std::setprecision(10) << vectorDistance(n, v1, v2) << std::endl;
    return 0;
}