#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    double distance = 0;
    if (v1.size() != v2.size()) {
        cout << "Vectors must be of the same size." << endl;
        return -1.0; // Return a default value or handle this situation as per your requirement
    }
    for (int i = 0; i < v1.size(); i++) {
        distance += pow(v1[i] - v2[i], 2);
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

    double distance = vectorDistance(v1, v2);
    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}