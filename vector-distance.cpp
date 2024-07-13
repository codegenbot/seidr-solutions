#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec1[i];
    }

    std::vector<float> vec2(n);
    for (int i = 0; i < n; ++i) {
        char comma; // to handle the comma separator
        std::cin >> vec2[i] >> comma;
    }

    float sum = 0.0f;
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    float result = sqrt(sum);
    std::cout << std::fixed << std::setprecision(14) << result << std::endl;

    return 0;
}