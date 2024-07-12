#include <vector>
#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

double vectorDistance(int n, double* v1, double* v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    double val1[n], val2[n];

    for(int i = 0; i < n; i++) {
        cin >> val1[i] >> val2[i];
    }

    cout << fixed << setprecision(10) << vectorDistance(n, val1, val2) << endl;
    return 0;
}