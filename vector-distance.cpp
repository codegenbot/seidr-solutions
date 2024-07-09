#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance(vector<float> v1, vector<float> v2) {
    if (v1.size() != v2.size()) {
        cout << "Vectors are of different sizes. Cannot calculate Euclidean distance." << endl;
        return -1.0;
    }
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    vector<float> vec1(n);
    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }
    cin >> n;
    vector<float> vec2(n);
    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }
    double distance = calculateEuclideanDistance(vec1, vec2);
    cout << fixed << setprecision(10) << distance << endl;
    return 0;
}