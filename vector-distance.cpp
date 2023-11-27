#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double calculateEuclideanDistance(vector<float>& v1, vector<float>& v2) {
    double sumOfSquares = 0;
    for (int i = 0; i < v1.size(); i++) {
        double difference = v1[i] - v2[i];
        sumOfSquares += difference * difference;
    }
    return sqrt(sumOfSquares);
}

int main() {
    int n;
    cin >> n;
    vector<float> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    cin >> n;
    vector<float> v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    
    double distance = calculateEuclideanDistance(v1, v2);
    cout << distance << endl;

    return 0;
}