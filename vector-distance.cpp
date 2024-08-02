#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long double> vec1(n);
    vector<long double> vec2(n);

    for (int i = 0; i < n; ++i) cin >> vec1[i];
    for (int i = 0; i < n; ++i) cin >> vec2[i];

    long double distance = 0;
    for (int i = 0; i < n; ++i) {
        long double diff = vec1[i] - vec2[i];
        distance += diff * diff;
    }
    distance = sqrtl(distance);
    cout << scientific << setprecision(15) << distance << endl;

    return 0;
}