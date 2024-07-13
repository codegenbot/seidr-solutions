#include <iostream>
#include <vector>

using namespace std;

double calculateEuclideanDistance(const vector<float>& v1, const vector<float>& v2) {
    double sum = 0.0;
    
    if(v1.size() != v2.size()) {
        cout << "Vectors must have the same size." << endl;
        return -1.0; // or handle error better
    }
    
    for(int i = 0; i < v1.size(); ++i) {
        sum += pow((v1[i] - v2[i]), 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n), vec2(n);

    for(int i = 0; i < n; ++i) {
        cin >> vec1[i] >> vec2[i];
    }

    double distance = calculateEuclideanDistance(vec1, vec2);
    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}