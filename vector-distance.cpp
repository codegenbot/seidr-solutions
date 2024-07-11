#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    double distance = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        float diff = v1[i] - v2[i];
        distance += pow(diff, 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n);
    for (float& val : vec1) {
        cin >> val;
    }

    vector<float> vec2(n);
    for (float& val : vec2) {
        cin >> val;
    }

    double distance = vectorDistance(vec1, vec2);

    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}