#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double euclideanDistance(const vector<double>& vector1, const vector<double>& vector2) {
    double distance = 0.0;
    int n = vector1.size();
    
    for (int i = 0; i < n; i++) {
        distance += pow(vector1[i] - vector2[i], 2);
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    
    vector<double> vector1(n);
    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }
    
    cin >> n;
    
    vector<double> vector2(n);
    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }
    
    double distance = euclideanDistance(vector1, vector2);
    cout << distance << endl;
    
    return 0;
}