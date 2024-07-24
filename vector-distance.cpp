#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> v1(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
        if(v1[i] < 0) v1[i] = 0;
        else if (v1[i] > 1) v1[i] = 1;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<double> v2(n);
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
        if(v2[i] < 0) v2[i] = 0;
        else if (v2[i] > 1) v2[i] = 1;
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(v1[i] - v2[i], 2);
    }

    cout << sqrt(sum) << endl;

    return 0;
}