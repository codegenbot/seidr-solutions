#include <vector>
#include <iostream>

using namespace std;

double calculateEuclideanDistance(const vector<float>& v1, const vector<float>& v2) {
    double distance = 0.0;
    int n = v1.size();
    
    for(int i=0; i<n; i++) {
        float diff = v1[i] - v2[i];
        distance += diff * diff;
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for(int i=0; i<n; i++) {
        cin >> v1[i] >> v2[i];
    }

    double distance = calculateEuclideanDistance(v1, v2);
    
    cout << fixed << setprecision(10) << distance << endl;
    
    return 0;
}