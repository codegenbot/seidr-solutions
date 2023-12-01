#include <iostream>
#include <vector>
#include <cmath>

double euclideanDistance(const std::vector<double>& a, const std::vector<double>& b) {
    double sum = 0.0;
    for (int i = 0; i < a.size(); i++) {
        double diff = a[i] - b[i];
        sum += diff * diff;
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<double> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::cin >> n;

    std::vector<double> b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    double result = euclideanDistance(a, b);
    std::cout << result << std::endl;

    return 0;
}