```cpp
#include <vector>
#include <cmath>

double euclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    int min_len = std::min(v1.size(), v2.size());
    for (int i = 0; i < min_len; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    if (v1.size() > v2.size()) {
        for (int i = min_len; i < v1.size(); i++) {
            sum += pow(0 - v1[i], 2); 
        }
    } else if (v2.size() > v1.size()) {
        for (int i = min_len; i < v2.size(); i++) {
            sum += pow(v2[i] - 0, 2); 
        }
    }
    return sqrt(sum);
}