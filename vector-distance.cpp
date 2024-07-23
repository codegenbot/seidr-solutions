#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<double> vec1(n);
    std::vector<double> vec2(n);

    for (int i = 0; i < n; ++i) {
        char comma; // to read and ignore comma
        std::cin >> vec1[i] >> comma;
    }

    for (int i = 0; i < n; ++i) {
        char comma; // to read and ignore comma
        std::cin >> vec2[i] >> comma;
    }

    double sum = 0;
    
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    double distance = sqrt(sum);
    std::cout << distance << std::endl;

    return 0;
}