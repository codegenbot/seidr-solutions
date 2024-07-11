#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); ++i) {
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

    double distance = vectorDistance(v1, v2);

    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}