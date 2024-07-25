#include <vector>
#include <iostream>

using namespace std;

double vector_distance(vector<float> v1, vector<float> v2) {
    int n = v1.size();
    double distance = 0;
    
    for (int i = 0; i < n; i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(distance);
}

int main() {
    int N;
    cin >> N;
    
    vector<float> v1(N);
    for (float &x : v1) {
        cin >> x;
    }
    
    vector<float> v2(N);
    for (float &x : v2) {
        cin >> x;
    }
    
    cout << fixed << setprecision(10) << vector_distance(v1, v2) << endl;
    
    return 0;
}