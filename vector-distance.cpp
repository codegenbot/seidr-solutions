#include <vector>
#include <iostream>
using namespace std;

double vectorDistance(vector<float> v1, vector<float> v2) {
    if (v1.size() != v2.size()) {
        cout << "Vectors are of different sizes. Cannot calculate distance." << endl;
        return -1.0; // Return an error indicator
    }
    
    double distance = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }
    cout << fixed << setprecision(10) << vectorDistance(v1, v2) << endl;
    return 0;
}