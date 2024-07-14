#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>

double vectorDistance() {
    int n;
    std::cin >> n; 
    std::vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        float temp1, temp2;
        std::cin >> temp1; // read one value
        v1[i] = temp1;
        std::cin >> temp2; 
        v2[i] = temp2; 
    }
    return sqrt(std::accumulate(v1.begin(), v1.end(), 0.0, [v2](double sum, double val) {return pow(val - v2[static_cast<int>(sum)], 2) + sum; }));
}