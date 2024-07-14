#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    if (v1.size() != v2.size()) {
        cerr << "Vectors must be of the same size." << endl;
        return 0.0; // or throw an exception
    }

    double sum = 0.0;
    for (int i = 0; i < v1.size(); ++i) {
        float diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    cin >> n;

    vector<float> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    cout << fixed << setprecision(10) << vectorDistance(vec1, vec2) << endl;

    return 0;
}