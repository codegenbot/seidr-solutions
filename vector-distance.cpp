#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance(int n, const vector<float>& v1, const vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        float diff = v1[i] - v2[i];
        sum += pow(diff, 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    cout << fixed << setprecision(10) << calculateEuclideanDistance(n, v1, v2) << endl;

    return 0;
}