#include <vector>
#include <iostream>

double vector_distance(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) {
        std::cerr << "Vectors are not of the same size." << std::endl;
        return -1.0;  // or some other error value
    }

    double sum = 0.0;
    for (int i = 0; i < v1.size(); ++i) {
        sum += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> v1(n), v2(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> v1[i] >> v2[i];
    }

    double result = vector_distance(v1, v2);
    std::cout << result << std::endl;

    return 0;
}