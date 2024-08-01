#include <iostream>
#include <vector>
using namespace std;

double vectorDistance(vector<double> v1, vector<double> v2) {
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        double diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    vector<double> v1(n);
    for (double& val : v1) {
        cin >> val;
    }
    cin >> n;
    vector<double> v2(n);
    for (double& val : v2) {
        cin >> val;
    }
    double distance = vectorDistance(v1, v2);
    cout << fixed << setprecision(10) << distance << endl;
    return 0;
}