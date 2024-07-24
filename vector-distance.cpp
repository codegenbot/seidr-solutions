#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance(vector<float> vector1, vector<float> vector2) {
    double distance = 0;
    for (int i = 0; i < vector1.size(); i++) {
        distance += pow((vector1[i] - vector2[i]), 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    vector<float> vec1(n);
    for (float &val : vec1) {
        cin >> val;
    }
    cin.ignore();
    cin >> n;
    vector<float> vec2(n);
    for (float &val : vec2) {
        cin >> val;
    }
    cout << fixed << setprecision(10) << calculateEuclideanDistance(vec1, vec2) << endl;
    return 0;
}