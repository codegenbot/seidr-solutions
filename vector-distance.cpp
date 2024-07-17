#include <iostream>
#include <cmath>
using namespace std;

double calculateEuclideanDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double v1Val, v2Val;
        cin >> v1Val >> v2Val;
        sum += pow(v2Val - v1Val, 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n; 
    double* v1 = new double[n], *v2 = new double[n]; 
    for (int i = 0; i < n; i++) { 
        cin >> v1[i] >> v2[i];
    }
    
    cout << calculateEuclideanDistance(n) << endl;
    delete[] v1, v2;
    return 0;
}