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
    // assign some values to v1 and v2
    v1.push_back(1.0f);
    v1.push_back(2.0f);
    v2.push_back(3.0f);
    v2.push_back(4.0f);

    cout << vectorDistance(v1, v2) << endl;
    return 0;
}