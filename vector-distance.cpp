#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    double sum = 0;
    float x1[n], x2[n];

    // Read input vectors
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Calculate Euclidean distance
    for (int i = 0; i < n; i++) {
        sum += pow(x2[i] - x1[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    cout << fixed << setprecision(10) << vectorDistance(n) << endl;

    return 0;
}