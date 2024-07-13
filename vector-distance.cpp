#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    return std::hypot(v1.begin(), v1.end() - v1.begin(), &v1[0] - v1.begin(), &v2[0]);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; ++i) {
        cin >> v1[i] >> v2[i];
    }

    cout << setprecision(10) << fixed << vectorDistance(v1, v2) << endl;

    return 0;
}