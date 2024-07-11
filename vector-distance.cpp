#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    float x1[n], x2[n];
    
    // Read the first vector
    for (int i = 0; i < n; i++) {
        cin >> x1[i];
    }
    
    // Read the second vector
    for (int i = 0; i < n; i++) {
        cin >> x2[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(x1[i] - x2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    
    return 0;
}