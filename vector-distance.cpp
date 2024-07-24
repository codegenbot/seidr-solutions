#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    double sum = 0;
    float v1[n], v2[n];
    
    // Read input vectors
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }
    
    // Calculate Euclidean distance
    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    double result = vectorDistance(n);
    
    cout << fixed << setprecision(10) << result << endl;
    
    return 0;
}