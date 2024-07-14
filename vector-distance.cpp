```cpp
#include <iostream>
#include <cmath>

double vectorDistance() {
    int n;
    std::cin >> n; 
    double sumOfSquares = 0;
    float* v1 = new float[n], *v2 = new float[n];
    for (int i = 0; i < n; i++) {
        std::cin >> v1[i] >> v2[i];

        double differenceSquared = pow(v2[i] - v1[i], 2);
        sumOfSquares += differenceSquared;
    }
    delete[] v1;
    delete[] v2;
    return sqrt(sumOfSquares);
}