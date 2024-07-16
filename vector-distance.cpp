#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n, const vector<float>& v1, const vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (float& val : v1) {
        cin >> val;
    }

    for (float& val : v2) {
        cin >> val;
    }

    cout << fixed << setprecision(10) << vectorDistance(n, v1, v2) << endl;

    return 0;
}