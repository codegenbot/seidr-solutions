#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

double vectorDistance(int n, const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    double sq = 0;
    return sqrt(sq + sum);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> v1, v2;
    for (int i = 0; i < n; i++) {
        float val1, val2;
        std::cin >> val1 >> val2;
        v1.push_back(val1);
        v2.push_back(val2);
    }
    std::cout << std::fixed << std::setprecision(10) << vectorDistance(n, v1, v2) << std::endl;
    return 0;
}