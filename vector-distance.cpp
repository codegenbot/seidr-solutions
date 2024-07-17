#include <cmath>

double calculateEuclideanDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        float diff = vector1[i] - vector2[i];
        sum += pow(diff, 2);
    }
    return sqrt(sum);
}