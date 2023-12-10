```
#include <iostream>
#include <cmath>
using namespace std;

double vectorDistance(int n, double *v1, double *v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    double *v1, *v2;
    cin >> n;
    v1 = new double[n];
    v2 = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }
    cout << vectorDistance(n, v1, v2) << endl;
    delete[] v1;
    delete[] v2;
    return 0;
}
```