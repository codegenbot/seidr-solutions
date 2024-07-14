#include <iostream>
#include <vector>
using namespace std;

double calculateEuclideanDistance(vector<float> vector1, vector<float> vector2) {
    if (vector1.size() != vector2.size()) {
        cout << "Vectors must be of same size." << endl;
        return -1.0; 
    }

    double distance = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        double diff = vector1[i] - vector2[i];
        distance += diff * diff;
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> vector1(n), vector2(n);

    for (int i = 0; i < n; i++) {
        cin >> vector1[i] >> vector2[i];
    }

    cout << fixed << setprecision(10) << calculateEuclideanDistance(vector1, vector2) << endl;

    return 0;
}