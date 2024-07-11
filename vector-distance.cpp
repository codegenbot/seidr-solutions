#include <vector>
#include <iostream>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        float diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> v1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v1[i];
    }

    std::cin >> n;

    std::vector<float> v2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v2[i];
    }

    double distance = vectorDistance(v1, v2);

    std::cout << std::fixed << std::setprecision(10) << distance << std::endl;

    return 0;
}