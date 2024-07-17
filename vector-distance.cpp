#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

double calculateEuclideanDistance(int n, vector<double> v1, vector<double> v2) {
    double sumOfSquares = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = pow((v1[i] - v2[i]), 2);
        sumOfSquares += diff;
    }
    return sqrt(sumOfSquares); 
}

int main() {
    int n;
    cin >> n; 
    vector<double> v1(n), v2(n); 
    for (int i = 0; i < n; i++) { 
        cin >> v1[i] >> v2[i];
    }
    
    cout << fixed << setprecision(20) << calculateEuclideanDistance(n, v1, v2) << endl;
    return 0;
}