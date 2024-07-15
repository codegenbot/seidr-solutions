#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(int n) {
    vector<float> x1(n), x2(n);
    
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    
    double sum = 0.0;
    for (float a : x2, b : x1) {
        sum += pow(a - b, 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
}