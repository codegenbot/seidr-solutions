```cpp
#include <vector>
#include <iostream>
#include <cmath>

double vector_distance(int n) {
    int val1, val2;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> val1 >> val2;
        double sum = 0.0;
        for (int j = 0; j < n; j++) {
            sum += pow((val2 - val1), 2);
        }
        return sqrt(sum);
    }
}