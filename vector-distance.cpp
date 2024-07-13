#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> vec1(n), vec2(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    double sum = 0.0;
    double distance = 0.0;

    for (int i = 0; i < n; ++i) {
        sum += pow(vec2[i] - vec1[i], 2);
    }

    distance = sqrt(sum);
    cout << fixed << setprecision(14) << distance << endl;

    return 0;
}