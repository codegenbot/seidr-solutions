#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given two n-dimensional vectors of floats, return the Euclidean distance between the two vectors in n-dimensional space.
For example,
input:
*/

float euclidean(vector<float>& v1, vector<float>& v2) {
    float res = 0;
    for (int i = 0; i < v1.size(); i++) {
        res += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    return sqrt(res);
}

int main() {
    int n;
    cin >> n;
    vector<float> v1, v2;
    for (int i = 0; i < n; i++) {
        float temp;
        cin >> temp;
        v1.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        float temp;
        cin >> temp;
        v2.push_back(temp);
    }
    cout << euclidean(v1, v2) << endl;
    return 0;
}
