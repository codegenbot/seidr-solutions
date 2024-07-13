#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long double> vec1(n), vec2(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    long double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += (vec2[i] - vec1[i]) * (vec2[i] - vec1[i]);
    }

    long double distance = sqrt(sum);
    cout << fixed << setprecision(14) << distance << endl;

    return 0;
}