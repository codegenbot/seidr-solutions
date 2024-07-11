```c++
#include <cmath>
#include <vector>

double vectorDistance(int n, const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double diff = v1[i] - v2[i];
        sum += std::pow(diff, 2);
    }
    return std::sqrt(sum);
}

int main() {
    int n = 3;
    std::vector<float> v1(n); 
    for (int i = 0; i < n; i++) {
        v1[i] = static_cast<float>(i); 
    }

    std::vector<float> v2(n);
    for (int i = 0; i < n; i++) {
        v2[i] = static_cast<float>(i) + 3.5f; 
    }

    double dist = vectorDistance(n, v1, v2);

    std::cout << "Euclidean distance between vectors: " << dist << std::endl;

    return 0;
}