#include <iostream>
#include <cmath>
#include <vector>

double vectorDistance() {
    int n;
    std::cin >> n; 
    std::vector<float>(n) v1, v2;
    for (int i = 0; i < n; i++) {
        float temp1, temp2;
        std::cin >> temp1; // read one value
        v1[i] = temp1;
        std::cin >> temp2; 
        v2[i] = temp2; 
    }
    return sqrt(std::inner_product(v1.begin(), v1.end(), v2.begin(), 0.0));
}