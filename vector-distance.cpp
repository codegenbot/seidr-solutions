#include <vector>
#include <iostream>

using namespace std;

double euclideanDistance(const vector<float>& vec1, const vector<float>& vec2) {
    if (vec1.size() != vec2.size()) {
        cout << "Error: Vectors must have the same size." << endl;
        return -1.0;
    }

    double sum = 0.0;
    for (int i = 0; i < vec1.size(); ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n), vec2(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec1[i] >> vec2[i];
    }

    double dist = euclideanDistance(vec1, vec2);
    cout << fixed << setprecision(10) << dist << endl;

    return 0;
}