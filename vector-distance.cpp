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
    std::vector<float> v1 = {1.0f, 2.0f, 3.0f};

    std::vector<float> v2 = {4.0f, 5.0f, 6.0f};

    double dist = euclideanDistance(v1, v2);
    printf("Euclidean distance: %.2f\n", dist);

    return 0;
}