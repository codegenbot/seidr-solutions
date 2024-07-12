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
        sum += pow(vec1[i] - vec2[i], 2);
    }

    long double distance = sqrt(sum);
    cout << fixed << setprecision(6) << distance << endl;

    return 0;
}