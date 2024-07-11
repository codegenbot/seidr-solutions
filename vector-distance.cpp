#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); ++i) {
        float diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n), vec2(n);

    for (int i = 0; i < n; ++i) {
        float x;
        cin >> x;
        vec1[i] = x;
    }

    for (int i = 0; i < n; ++i) {
        float x;
        cin >> x;
        vec2[i] = x;
    }

    cout << setprecision(10) << vectorDistance(vec1, vec2) << endl;

    return 0;
}