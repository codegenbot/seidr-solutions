#include <iostream>
#include <cmath>

double vectorDistance(int n, double* v) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow((v[i+1] - v[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    std::cin >> n; 
    double* v = new double[n];
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }    
    double result = vectorDistance(n, v); 
    delete[] v;
    return 0;
}