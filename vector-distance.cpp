#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> v1(n), v2(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    
    cin.ignore(); // Skip any leading whitespace before reading the second vector
    
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }
    
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(v1[i] - v2[i], 2);
    }

    cout << fixed << sqrt(sum) << endl;
    
    return 0;
}