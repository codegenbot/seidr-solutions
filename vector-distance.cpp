```cpp
#include <vector>
#include <cmath>

double vectorDistance(int n, const std::vector<float>& x1, const std::vector<float>& x2) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        double diff = pow((x2[i] - x1[i]), 2);
        result += diff;
    }
    
    return sqrt(result); 
}