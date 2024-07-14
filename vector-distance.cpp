#include <vector>
#include <iostream>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double distance = 0;
    int n = v1.size();
    for (int i = 0; i < n; ++i) {
        float diff = v1[i] - v2[i];
        distance += diff * diff;
    }
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<float> v1(n);
    for (float& x : v1) {
        std::cin >> x;
    }
    
    std::vector<float> v2(n);
    for (float& x : v2) {
        std::cin >> x;
    }
    
    double result = vectorDistance(v1, v2);
    std::cout << std::setprecision(std::numeric_limits<double>::digits10) << result << std::endl;
    
    return 0;
}