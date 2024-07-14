#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for (float& f : v1) {
        cin >> f;
    }

    vector<float> v2(n);
    for (float& f : v2) {
        cin >> f;
    }

    double result = vectorDistance(v1, v2);

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}