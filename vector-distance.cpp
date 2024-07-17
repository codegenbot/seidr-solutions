#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double calculateEuclideanDistance(int n, vector<double> v1, vector<double> v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double diff = v1[i] - v2[i];
        cout << "diff: " << diff << endl;
        sum += pow(diff, 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n; 
    vector<double> v1(n), v2(n); 
    for (int i = 0; i < n; i++) { 
        cin >> v1[i] >> v2[i];
    }
    
    cout << calculateEuclideanDistance(n, v1, v2) << endl;
    return 0;
}