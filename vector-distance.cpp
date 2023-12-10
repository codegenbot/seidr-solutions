#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

double vectorDistance(vector<float>& v1, vector<float>& v2) {
    double distance = 0;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] > v2[i]) {
            swap(v1[i], v2[i]);
        }
        distance += pow(v1[i] - v2[i-1], 2);
    }
    return sqrt(distance);
}