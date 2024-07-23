#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vector1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vector1[i];
    }

    std::vector<double> vector2(n);
    char dummy; // to discard the commas in the input
    for (int i = 0; i < n; ++i) {
        std::cin >> vector2[i] >> dummy;
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vector1[i] - vector2[i], 2);
    }

    double distance = sqrt(sum);
    std::cout << distance << std::endl;

    return 0;
}