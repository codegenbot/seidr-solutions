#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    double x1, y1;
    vector<float> v1, v2;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x1;
        v1.push_back(x1);
    }
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> y1;
        v2.push_back(y1);
    }

    double distance = 0.0;
    for (int i = 0; i < n; ++i) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;

    return 0;
}