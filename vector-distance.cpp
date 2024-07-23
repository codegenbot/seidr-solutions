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
    for (int i = 0; i < n - 1; ++i) {
        std::cin >> vector2[i]; // Remove the dummy variable
    }
    std::cin >> vector2[n - 1]; // Read the last value without the comma

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vector1[i] - vector2[i], 2);
    }

    double distance = sqrt(sum);
    std::cout << distance << std::endl;

    return 0;
}