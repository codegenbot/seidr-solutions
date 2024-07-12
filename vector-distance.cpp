#include <vector>
#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

double vectorDistance(int n, double* vec1, double* vec2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow((vec2[i] - vec1[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    // Read two vectors
    double* vec1 = new double[n];
    double* vec2 = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> vec1[i] >> vec2[i];
    }
    
    cout << fixed << setprecision(10) << vectorDistance(n, vec1, vec2) << endl;
    
    delete[] vec1;
    delete[] vec2;
    
    return 0;
}