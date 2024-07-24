#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> v1(n), v2(n);
    double val;
    
    for (int i = 0; i < n; ++i) {
        cin >> val;
        v1[i] = val;
    }

    for (int i = 0; i < n; ++i) {
        cin >> val;
        v2[i] = val;
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(v1[i] - v2[i], 2);
    }

    cout << fixed << sqrt(sum) << endl;
    
    return 0;
}