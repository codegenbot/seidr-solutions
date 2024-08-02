#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long double> vec1(n);
    vector<long double> vec2(n);

    for (int i = 0; i < n; ++i) cin >> vec1[i];
    for (int i = 0; i < n; ++i) cin >> vec2[i];

    long double sum = 0;
    for (int i = 0; i < n; ++i) sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]); // Correcting the distance calculation

    long double distance = sqrt(sum);
    cout << fixed << distance << endl; // Using fixed to print all decimal places
    return 0;
}