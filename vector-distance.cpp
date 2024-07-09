```cpp
#include <cmath>
#include <vector>

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        float diff = (float)v1[i] - (float)v2[i];
        if (!std::isfinite(diff)) {
            std::cerr << "NaN detected at position " << i << std::endl;
        } else {
            sum += pow(diff, 2);
        }
    }
    return sqrt(sum);
}