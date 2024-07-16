#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    double a[n], b[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    
    double sum = 0.0;
    
    for (int i = 0; i < n; i++) {
        sum += pow((b[i] - a[i]), 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    vectorDistance(n);
    
    return 0;
}