#include <vector>
#include <iostream>
using namespace std;

double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    if (v1.size() != v2.size()) {
        cout << "Vectors must be of the same size." << endl;
        return -1.0;
    }
    
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        float diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for (float& x : v1) {
        cin >> x;
    }

    vector<float> v2(n);
    for (float& x : v2) {
        cin >> x;
    }

    cout << fixed << setprecision(10) << vectorDistance(v1, v2) << endl;

    return 0;
}