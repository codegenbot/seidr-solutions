#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

double vector_distance(int n) {
    vector<float> v1(n), v2(n);
    for (auto &x : v1) cin >> x;
    for (auto &x : v2) cin >> x;
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vector_distance(n) << endl;
    return 0;
}