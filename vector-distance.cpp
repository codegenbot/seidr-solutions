#include <iostream>
#include <cmath>
using namespace std;

double vectorDistance() {
    int n;
    cin >> n; 
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double x1, x2;
        cin >> x1 >> x2; 
        sum += sqrt(pow(x2 - x1, 2));
    }
    return sum;
}