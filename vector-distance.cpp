#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    double* x1 = new double[n], *x2 = new double[n];
    for(int i=0; i<n; i++) {
        scanf("%lf %lf", &x1[i], &x2[i]);
    }
    double sum = 0;
    for(int i=0; i<n; i++) {
        sum += (x2[i] - x1[i]) * (x2[i] - x1[i]);
    }
    printf("%.4f\n", sqrt(sum));
    return 0;
}