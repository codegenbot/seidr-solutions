#include <vector>
#include <iostream>

using namespace std;

double calculateEuclideanDistance(const vector<float>& vec1, const vector<float>& vec2) {
    double distance = 0.0;
    int n = vec1.size();
    
    for (int i = 0; i < n; ++i) {
        distance += pow(vec1[i] - vec2[i], 2);
    }
    
    return sqrt(distance);
}

int main() {
    int N;
    cin >> N;
    
    vector<float> vec1(N);
    for (float& val : vec1) {
        cin >> val;
    }
    
    vector<float> vec2(N);
    for (float& val : vec2) {
        cin >> val;
    }
    
    double distance = calculateEuclideanDistance(vec1, vec2);
    cout << fixed << setprecision(10) << distance << endl;
    
    return 0;
}