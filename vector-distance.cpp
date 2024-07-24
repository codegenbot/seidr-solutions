#include <vector>
#include <iostream>

double vector_distance(const std::vector<float>& v1, const std::vector<float>& v2) {
    if(v1.size() != v2.size()) {
        return -1.0; // invalid input
    }
    double sum = 0;
    for(int i = 0; i < v1.size(); i++) {
        sum += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> v1(n);
    for(int i = 0; i < n; i++) {
        std::cin >> v1[i];
    }
    std::cin >> n;
    std::vector<float> v2(n);
    for(int i = 0; i < n; i++) {
        std::cin >> v2[i];
    }
    double result = vector_distance(v1, v2);
    std::cout << std::setprecision(10) << result << std::endl;
    return 0;
}