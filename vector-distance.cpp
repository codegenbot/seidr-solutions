#include <vector>
#include <iostream>

using namespace std;

double vector_distance(int n, const vector<float>& v1, const vector<float>& v2) {
    double dist = 0.0;
    for (int i = 0; i < n; i++) {
        dist += pow(v1[i] - v2[i], 2);
    }
    return sqrt(dist);
}

int main() {
    int n;
    cin >> n;
    
    vector<float> vec1(n), vec2(n);
    
    for (int i = 0; i < n; i++) {
        cin >> vec1[i] >> vec2[i];
    }
    
    cout << setprecision(10) << fixed << vector_distance(n, vec1, vec2) << endl;
    
    return 0;
}