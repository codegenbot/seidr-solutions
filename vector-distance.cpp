#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(int n) {
    vector<float> x1, x2;
    
    float a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        x1.push_back(a); x2.push_back(b);
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(x2[i] - x1[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
}