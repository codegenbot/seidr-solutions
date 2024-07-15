#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    if (!(std::cin >> n) || n <= 0) {
        return 1;
    }

    std::vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        if (!(std::cin >> vec1[i])) {
            return 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (!(std::cin >> vec1[i])) {
            return 1;
        }
    }

    std::vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        if (!(std::cin >> vec2[i])) {
            return 1;
        }
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    double result = std::sqrt(sum);
    std::cout << result << std::endl;

    if (std::cin.peek() != EOF) {
        return 1;
    }

    return 0;
}