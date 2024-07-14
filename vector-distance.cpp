#include <vector>
#include <iostream>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) {
        return -1; // or throw an exception
    }
    
    double distance = 0.0;
    for (int i = 0; i < v1.size(); ++i) {
        float diff = v1[i] - v2[i];
        distance += diff * diff;
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> v1(n), v2(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> v1[i] >> v2[i];
    }

    double result = vectorDistance(v1, v2);
    std::cout << result << std::endl;

    return 0;
}