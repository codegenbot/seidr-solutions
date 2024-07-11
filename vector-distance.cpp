#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }
    
    cin >> n;
    vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }
    
    long double sum = 0.0; // Update to long double
    for (int i = 0; i < n; ++i) {
        sum += static_cast<long double>(pow(vec1[i] - vec2[i], 2)); // Cast to long double
    }
    
    cout << fixed << setprecision(15) << sqrt(sum) << endl; // Ensure precision is set adequately
    
    return 0;
}