#include <vector>
#include <iostream>
#include <cmath>

double vectorDistance(std::vector<float> v1, std::vector<float> v2) {
    double distance = 0;
    for(int i = 0; i < v1.size(); i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance); 
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> v1(n), v2(n);

    for(int i = 0; i < n; i++) {
        std::cin >> v1[i];
    }

    for(int i = 0; i < n; i++) {
        std::cin >> v2[i];
    }

    double result = vectorDistance(v1, v2);
    std::cout << std::fixed << std::setprecision(10) << result << std::endl;

    return 0;
}