#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(const vector<float>& vec1, const vector<float>& vec2) {
    double sum = 0;
    for (int i = 0; i < vec1.size(); i++) {
        sum += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (float& x : v1) cin >> x;
    for (float& x : v2) cin >> x;

    cout << fixed << setprecision(10) << vectorDistance(v1, v2) << endl;

    return 0;
}