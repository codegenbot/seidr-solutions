#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance(vector<float> vector1, vector<float> vector2) {
    double distance = 0;
    for(int i = 0; i < vector1.size(); i++) {
        double difference = vector1[i] - vector2[i];
        distance += difference * difference;
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> vector1(n);
    for(int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    vector<float> vector2(n);
    for(int i = 0; i < n; i++) {
        cin >> vector2[i];
    }

    double distance = calculateEuclideanDistance(vector1, vector2);

    cout << fixed << setprecision(10) << distance;
    
    return 0;
}