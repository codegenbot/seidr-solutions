#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    double n;
    cin >> n;
    vector<double> vec1(n);
    vector<double> vec2(n);

    for (double i = 0; i < n; ++i) {
        cin >> vec1[i];
    }
    for (double i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    double sum = 0;
    for (double i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    double distance = sqrt(sum);
    cout << distance << endl;

    return 0;
}