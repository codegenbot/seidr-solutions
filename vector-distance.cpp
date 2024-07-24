#include <vector>
#include <iostream>
using namespace std;

double calculateDistance(const vector<float>& vec1, const vector<float>& vec2) {
    double distance = 0.0;
    for (int i = 0; i < vec1.size(); ++i) {
        double diff = vec1[i] - vec2[i];
        distance += diff * diff;
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n);
    for (float& f : vec1) {
        cin >> f;
    }

    vector<float> vec2(n);
    for (float& f : vec2) {
        cin >> f;
    }

    double result = calculateDistance(vec1, vec2);

    cout.setprecision(15); // to print more than 10 decimal places
    cout << fixed << result << endl;

    return 0;
}