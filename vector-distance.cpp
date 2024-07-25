#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double calculateEuclideanDistance(int n, const vector<float>& v1, const vector<float>& v2) {
    double distance = 0.0;
    
    for (int i = 0; i < n; i++) {
        float diff = v1[i] - v2[i];
        distance += pow(diff, 2);
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        float x;
        cin >> x;
        v1[i] = v2[i] = x;
    }

    double distance = calculateEuclideanDistance(n, v1, v2);
    
    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}