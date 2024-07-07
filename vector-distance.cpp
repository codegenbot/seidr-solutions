```cpp
#include <cstdio>

int main() {
    int n; 
    scanf("%d", &n); 
    double* x1 = new double[n], *x2 = new double[n];

    double sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%lf", &x1[i]);
        scanf("%lf", &x2[i]);
        sum += (x1[i] - x2[i]) * (x1[i] - x2[i]);
    }

    printf("%.3f\n", sqrt(sum));
    
    delete[] x1;
    delete[] x2;

    return 0;
}