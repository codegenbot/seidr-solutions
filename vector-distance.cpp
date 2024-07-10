#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n <= 0) {
        cout << "Invalid input for dimension." << endl;
        return 1;
    }

    vector<double> vec1(n);
    vector<double> vec2(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    double result = sqrt(sum);
    cout << result << endl;

    return 0;
}