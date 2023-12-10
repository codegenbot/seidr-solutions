```
#include <iostream>
#include <vector>
#include <cmath>

double calculateDistance(std::vector<double>& v1, std::vector<double>& v2) {
    double distance = 0;
    for (int i = 0; i < v1.size(); i++) {
        distance += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(distance);
}
```