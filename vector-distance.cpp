```cpp
#include <vector>
#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

double vectorDistance(int n, const vector<float>& v1, const vector<float>& v2) {
    double distance = 0;
    for (int i = 0; i < n; ++i) {
        float diff = v1[i] - v2[i];
        distance += diff * diff;
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; ++i) {
        cin >> v1[i] >> v2[i];
    }

    double distance = vectorDistance(n, v1, v2);
    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}