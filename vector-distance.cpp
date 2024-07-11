#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(const vector<float>& vec1, const vector<float>& vec2) {
    double distance = 0;
    for (int i = 0; i < vec1.size(); i++) {
        distance += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    double result = vectorDistance(v1, v2);
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}