#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(int n, float v1[], float v2[]) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += (v2[i] - v1[i]);
    }
    
    return sqrt(sum * sum); 
}

int main() {
    int n;
    float v1[100], v2[100];
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }
    
    cout << fixed << setprecision(10) << vectorDistance(n, v1, v2) << endl;
}