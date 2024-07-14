```cpp
#include <iostream>
#include <cmath>
#include <vector>

double vectorDistance() {
    int n;
    std::cin >> n; 
    std::vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        float temp;
        std::cin >> temp; // read one value
        v1[i] = temp;
        v2[i] = temp; 
    }
    return sqrt(std::inner_product(v1.begin(), v1.end(), v2.begin(), 0.0));
}