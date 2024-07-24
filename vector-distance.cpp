#include <vector>
#include <iostream>

using namespace std;

double vector_distance(int n) {
    float v1[n], v2[n];
    
    // Read input for first vector
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    
    // Read input for second vector
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    
    double sum = 0.0;
    
    // Calculate Euclidean distance
    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    vector_distance(n);
    
    return 0;
}