#include <vector>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double vector_distance(int n) {
    vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }
    double sum = 0.0;
    double length = 0.0;
    for (int i = 0; i < n; i++) {
        length += pow(v1[i], 2);
    }
    length = sqrt(length);

    for (int i = 0; i < n; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    
    return sqrt(sum) / length;
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vector_distance(n) << endl;
    return 0;
}