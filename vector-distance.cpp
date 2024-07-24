```cpp
#include <cmath>
#include <vector>
using namespace std;

float calculateEuclideanDistance(int n, const vector<float>& v1, const vector<float>& v2) {
    float sumOfSquares = 0;
    for (int i = 0; i < n; i++) {
        float diff = pow((v1[i] - v2[i]), 2);
        sumOfSquares += diff;
    }
    return sqrt(sumOfSquares);
}