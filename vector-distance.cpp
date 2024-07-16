#include <vector>
#include <iostream>
#include <cmath>

double vectorDistance(int n, const std::vector<float>& vec1, const std::vector<float>& vec2) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n), vec2(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i] >> vec2[i];
    }

    double result = vectorDistance(n, vec1, vec2);
    std::cout << std::fixed << std::setprecision(10) << result << "\n";

    return 0;
}