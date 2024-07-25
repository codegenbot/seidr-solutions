#include <vector>
#include <iostream>

using namespace std;

double calculateEuclideanDistance(const vector<float>& v1, const vector<float>& v2) {
    if (v1.size() != v2.size()) {
        cout << "Error: Vectors must be of the same size." << endl;
        return -1.0; // or some other error value
    }
    
    double distance = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        float diff = v1[i] - v2[i];
        distance += pow(diff, 2);
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    vector<float> v1(n), v2(n);

    for (float& val : v1) {
        cin >> val;
    }

    for (float& val : v2) {
        cin >> val;
    }

    cout << fixed << setprecision(10) << calculateEuclideanDistance(v1, v2) << endl;

    return 0;
}