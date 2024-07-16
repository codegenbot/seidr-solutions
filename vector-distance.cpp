#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(vector<float> v1, vector<float> v2) {
    double sum = 0;
    for(int i=0; i<v1.size(); i++) {
        sum += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1;
    vector<float> v2;

    for(int i=0; i<n; i++) {
        float val;
        cin >> val;
        v1.push_back(val);
    }

    for(int i=0; i<n; i++) {
        float val;
        cin >> val;
        v2.push_back(val);
    }

    cout << fixed << setprecision(10) << vectorDistance(v1, v2) << endl;

    return 0;
}