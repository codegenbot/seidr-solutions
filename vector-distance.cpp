#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance(int n, vector<float> v1, vector<float> v2) {
    double distance = 0;
    for (int i = 0; i < n; i++) {
        distance += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    cout << setprecision(10) << calculateEuclideanDistance(n, v1, v2) << endl;
    return 0;
}