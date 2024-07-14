#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(int n, const vector<float>& x1, const vector<float>& x2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double diff = pow(x2[i] - x1[i], 2);
        sum += diff;
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> x1(n), x2(n);

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    cout << fixed << setprecision(10) << vectorDistance(n, x1, x2) << endl;
}