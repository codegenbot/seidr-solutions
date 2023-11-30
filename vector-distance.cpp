#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

long double euclideanDistance(const vector<long double>& vector1, const vector<long double>& vector2) {
    long double distance = 0.0;
    int n = vector1.size();
    
    for (int i = 0; i < n; i++) {
        distance += pow(vector1[i] - vector2[i], 2);
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    
    vector<long double> vector1(n);
    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }
    
    cin >> n;
    
    vector<long double> vector2(n);
    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }
    
    long double distance = euclideanDistance(vector1, vector2);
    cout << fixed << setprecision(15) << distance << endl;
    
    return 0;
}