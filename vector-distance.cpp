```
#include <iostream>
#include <cmath>

double vectorDistance() {
    int n;
    cin >> n; 
    double sum = 0, x1, x2;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2; 
        sum += sqrt(pow(x2 - x1, 2));
    }
    return sum; 
}