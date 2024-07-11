#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    char comma;
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i] >> comma;
    }

    vector<float> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2.0);
    }

    cout << sqrt(sum) << "\n";

    return 0;
}