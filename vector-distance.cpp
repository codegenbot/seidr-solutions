#include <vector>
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::fixed;
using std::setprecision;

double vectorDistance(const std::vector<float>& v1, const std::vector<float>& v2) {
    double distance = 0;
    for (int i = 0; i < v1.size(); ++i) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    std::vector<float> v1(n), v2(n);

    for (int i = 0; i < n; ++i) {
        cin >> v1[i] >> v2[i];
    }

    double result = vectorDistance(v1, v2);
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}