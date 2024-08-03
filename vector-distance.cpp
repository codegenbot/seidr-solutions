#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long double> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }
    
    vector<long double> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    long double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]); // Avoid using pow for better accuracy
    }

    cout << fixed; // Ensure fixed point notation
    cout.precision(17); // Set precision to 17 decimal places
    cout << sqrt(sum) << endl;

    return 0;
}