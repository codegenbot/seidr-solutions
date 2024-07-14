#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(const vector<float>& vec1, const vector<float>& vec2) {
    double distance = 0.0;
    for (int i = 0; i < vec1.size(); i++) {
        distance += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for (float& val : v1) {
        cin >> val;
    }

    vector<float> v2(n);
    for (float& val : v2) {
        cin >> val;
    }

    cout << fixed << setprecision(10) << vectorDistance(v1, v2) << endl;

    return 0;
}