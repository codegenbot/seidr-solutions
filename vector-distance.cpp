#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> v1(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<float> v2(n);
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }

    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(v1[i] - v2[i], 2);
    }

    cout << sqrt(sum) << endl;

    return 0;
}