#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> vec1(n);
    vector<double> vec2(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        if (i == n - 1) {
            cin >> vec2[i];
        } else {
            cin >> vec2[i];
            char comma;
            cin >> comma; 
        }
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    double result = sqrt(sum);
    cout << fixed << result << "\n";

    return 0;
}