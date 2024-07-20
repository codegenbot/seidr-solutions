#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance() {
    int n;
    cin >> n;
    
    float v1[100], v2[100];
    
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    cout << fixed << setprecision(10) << vectorDistance() << endl;
}