#include <cstdio>
#include <cmath>
#include <cstddef>

int main() {
    int n;
    scanf("%d", &n);
    double* x1 = new double[n], *x2 = new double[n];

    for(int i=0; i<n; i++) {
        scanf("%lf", &x1[i]);
        scanf("%lf", &x2[i]);
    }

    double sum = 0.0;
    for(int i=0; i<n; i++) {
        sum += pow(x1[i] - x2[i], 2);
    }

    printf("%.4f\n", sqrt(sum));

    return 0;
}