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
    std::vector<float> v1(3);
    v1[0] = 1;
    v1[1] = 2;
    v1[2] = 3;

    std::vector<float> v2(3);
    v2[0] = 4;
    v2[1] = 5;
    v2[2] = 6;

    double dist = euclideanDistance(v1, v2);
    printf("Euclidean distance: %.2f\n", dist);

    return 0;
}