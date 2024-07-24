#include <cmath>
#include <vector>

double euclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    int len = std::max(v1.size(), v2.size());
    for (int i = 0; i < len; i++) {
        if(i >= v1.size()) v1.push_back(0.0f);
        if(i >= v2.size()) v2.push_back(0.0f);
        sum += pow(v2[i] - v1[i], 2);
    }
    return sqrt(sum);
}