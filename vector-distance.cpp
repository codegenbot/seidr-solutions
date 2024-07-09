```c++
#include <iostream>
#include <cmath>

using namespace std;

double* createArray(int n) {
    double* arr = new double[n];
    return arr;
}

void deleteArray(double* arr, int n) {
    delete[] arr;
}

double vectorDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double x1, x2;
        cin >> x1 >> x2;
        sum += pow(x2 - x1, 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    double* x1 = createArray(n);
    double* x2 = createArray(n);
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    deleteArray(x1, n);
    deleteArray(x2, n);
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
}