#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

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

    vector<float> vec1(n), vec2(n);

    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }

    double result = vectorDistance(vec1, vec2);
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}