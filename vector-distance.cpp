#include <iostream>
#include <vector>
using namespace std;

double euclideanDistance(const vector<float>& v1, const vector<float>& v2) {
    double sum = 0.0;
    int n = v1.size();
    for (int i = 0; i < n; ++i) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for (float& x : v1) cin >> x;

    cin.ignore(); // ignore the newline left in the buffer

    cin >> n;

    vector<float> v2(n);
    for (float& x : v2) cin >> x;

    cout << fixed << setprecision(10) << euclideanDistance(v1, v2) << endl;
    return 0;
}