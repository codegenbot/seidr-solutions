#include <vector>
#include <iostream>

using namespace std;

double calculateEuclideanDistance(const vector<float>& vector1, const vector<float>& vector2) {
    double distance = 0.0;
    
    for (int i = 0; i < vector1.size(); ++i) {
        double diff = vector1[i] - vector2[i];
        distance += diff * diff;
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> vector1(n), vector2(n);

    for (int i = 0; i < n; ++i) {
        float x, y;
        cin >> x >> y;
        vector1[i] = x;
        vector2[i] = y;
    }

    double distance = calculateEuclideanDistance(vector1, vector2);
    
    cout << fixed << setprecision(10);
    cout << distance << endl;

    return 0;
}