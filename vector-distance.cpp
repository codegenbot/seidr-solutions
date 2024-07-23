```cpp
#include <vector>
#include <cmath>

double euclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum); 
}

int main() {
    std::vector<float> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    std::vector<float> v2;
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);

    double dist = euclideanDistance(v1, v2);
    printf("Euclidean distance: %.2f\n", dist);

    return 0;
}