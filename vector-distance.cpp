#include <cmath>
#include <iostream>
using namespace std;

double vectorDistance(double v1[], double v2[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    return sqrt(sum); 
}

int main() {
    int n;
    cin >> n; // Read n
    double v1[n];
    double v2[n];
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }
    cout << vectorDistance(v1, v2, n) << endl;
    return 0;
}