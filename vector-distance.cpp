#include <vector>
#include <iostream>

using namespace std;

double calculateEuclideanDistance(const vector<float>& vec1, const vector<float>& vec2) {
    double distance = 0.0;
    
    for(int i=0; i<vec1.size(); i++) {
        distance += pow(vec1[i] - vec2[i], 2);
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for(int i=0; i<n; i++) {
        cin >> v1[i];
    }

    vector<float> v2(n);
    for(int i=0; i<n; i++) {
        cin >> v2[i];
    }

    double distance = calculateEuclideanDistance(v1, v2);

    cout << fixed;
    cout.precision(10); // set the precision to 10 decimal places
    cout << distance << endl;

    return 0;
}