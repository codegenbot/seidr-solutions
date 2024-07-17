#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(vector<float> v1, vector<float> v2) {
    double distance = 0;
    for(int i=0; i<v1.size(); i++) {
        distance += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    vector<float> v1(n), v2(n);
    for(int i=0; i<n; i++) {
        cin >> v1[i];
    }
    for(int i=0; i<n; i++) {
        cin >> v2[i];
    }
    if (n == 0) {
        cout << "Error: Number of dimensions cannot be zero." << endl;
    } else {
        cout << fixed << setprecision(10) << vectorDistance(v1, v2) << endl;
    }
    return 0;
}