#include <vector>
#include <iostream>

double vectorDistance(int n, std::vector<float> v1, std::vector<float> v2) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        float diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        float x;
        std::cin >> x;
        v1[i] = v2[i] = x;
    }
    std::cout << std::setprecision(10) << vectorDistance(n, v1, v2) << std::endl;
    return 0;
}