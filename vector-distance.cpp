
#include <iostream>
#include <cmath>
using namespace std;

double vectorDistance(vector<float>& v1, vector<float>& v2) {
    double distance = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    vector<float> v1, v2;
    float x;
    while (cin >> x) {
        v1.push_back(x);
    }
    while (cin >> x) {
        v2.push_back(x);
    }
    cout << vectorDistance(v1, v2) << endl;
    return 0;
}