#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> vec1(n), vec2(n); // change to vector<double>

    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    double sum = 0.0; // change to double
    for (int i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    double distance = sqrt(sum); // change to double
    cout << fixed << setprecision(14) << distance << endl; // setprecision to 14 for full precision output

    return 0;
}