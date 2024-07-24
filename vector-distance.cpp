#include <vector>
#include <cmath>
#include <cstdio>

double euclideanDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum); 
}

int main() {
    std::vector<float> v1;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        float x;
        scanf("%f", &x);
        v1.push_back(x);
    }
    
    std::vector<float> v2;
    for (int i = 0; i < n; i++) {
        float x;
        scanf("%f", &x);
        v2.push_back(x);
    }

    double dist = euclideanDistance(v1, v2);
    printf("Euclidean distance: %.2f\n", dist);

    return 0;