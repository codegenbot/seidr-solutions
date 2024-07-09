#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(const vector<double>& v1, const vector<double>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    vector<double> x1(n), x2(n);
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    cout << fixed << setprecision(10) << vectorDistance(x1, x2) << endl;
}