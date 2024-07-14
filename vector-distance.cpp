#include <vector>
#include <iostream>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) {
        return -1.0; // or throw an exception
    }
    
    double distance = 0;
    for (int i = 0; i < v1.size(); i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> v1(n), v2(n);

    for (float& x : v1) {
        std::cin >> x;
    }

    for (float& x : v2) {
        std::cin >> x;
    }

    double result = vectorDistance(v1, v2);
    
    std::cout << std::setprecision(std::numeric_limits<double>::max_digits10) << result << std::endl;

    return 0;
}