#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

double calculateEuclideanDistance(const vector<float>& v1, const vector<float>& v2) {
    if(v1.size() != v2.size()) {
        return -1.0;  // Return error value if vectors are of different sizes
    }

    double sum = 0;
    for(int i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for(int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    double distance = calculateEuclideanDistance(v1, v2);
    
    cout.precision(10); // For precision up to 10 decimal places
    cout << fixed << distance << endl;

    return 0;
}