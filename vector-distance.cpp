#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    double sum = 0;
    float a[n], b[n];
    
    // Read input vectors
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    
    // Calculate Euclidean distance
    for (int i = 0; i < n; i++) {
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