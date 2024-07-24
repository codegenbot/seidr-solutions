#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance(const vector<float>& vector1, const vector<float>& vector2) {
    double sum = 0.0;
    int size = min(vector1.size(), vector2.size());
    for (int i = 0; i < size; i++) {
        sum += pow(vector1[i] - vector2[i], 2);
    }
    if (vector1.size() > vector2.size()) {
        for (int i = size; i < vector1.size(); i++) {
            sum += pow(vector1[i], 2);
        }
    } else {
        for (int i = size; i < vector2.size(); i++) {
            sum += pow(vector2[i], 2);
        }
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    vector<float> vec1(n);
    for (float &val : vec1) {
        cin >> val;
    }
    vector<float> vec2(n);
    for (float &val : vec2) {
        cin >> val;
    }
    double result = calculateEuclideanDistance(vec1, vec2);
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}