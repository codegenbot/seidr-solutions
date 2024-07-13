#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> vec1(n), vec2(n);
    char comma;

    for (int i = 0; i < n; ++i) {
        cin >> vec1[i] >> comma; // Read comma as delimiter
    }
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i] >> comma; // Read comma as delimiter
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += (vec2[i] - vec1[i]) * (vec2[i] - vec1[i]);
    }

    double distance = sqrt(sum);
    cout << fixed << setprecision(14) << distance << endl;

    return 0;
}