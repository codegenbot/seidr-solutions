```
#include <iostream>
#include <cmath>
using namespace std;

double vector_distance(int n, double* v1, double* v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(sum);
}
```