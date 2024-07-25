#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n, const vector<float>& v1, const vector<float>& v2) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for (float &v : v1) {
        cin >> v;
    }

    cin >> n;

    vector<float> v2(n);
    for (float &v : v2) {
        cin >> v;
    }

    cout << fixed << setprecision(10) << vectorDistance(n, v1, v2) << endl;

    return 0;
}