#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n, const vector<float>& vec1, const vector<float>& vec2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        float diff = vec1[i] - vec2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n);
    for (float& v : vec1) {
        cin >> v;
    }

    vector<float> vec2(n);
    for (float& v : vec2) {
        cin >> v;
    }

    double distance = vectorDistance(n, vec1, vec2);

    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}