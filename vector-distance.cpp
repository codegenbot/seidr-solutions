#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(vector<float> v1, vector<float> v2) {
    double distance = 0;
    for (int i = 0; i < v1.size(); i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for (float &x : v1) {
        cin >> x;
    }

    vector<float> v2(n);
    for (float &x : v2) {
        cin >> x;
    }

    double result = vectorDistance(v1, v2);

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}