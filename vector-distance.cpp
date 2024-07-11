#include <vector>
#include <iostream>

using namespace std;

double vector_distance(int n, const vector<float>& v1, const vector<float>& v2) {
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

    for (int i = 0; i < n; ++i) {
        cin >> v1[i] >> v2[i];
    }

    double dist = vector_distance(n, v1, v2);
    cout << fixed << setprecision(10) << dist << endl;

    return 0;
}