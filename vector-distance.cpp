#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    double x1, y1;
    vector<float> v1(n), v2(n);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x1 >> y1;
        v1[i] = x1;
        v2[i] = y1;
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    cout << fixed << setprecision(10) << vectorDistance(n) << endl;

    return 0;
}