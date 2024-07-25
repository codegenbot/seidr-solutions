#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double vectorDistance(int n) {
    float a[n], b[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += pow(b[i] - a[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;

    return 0;
}