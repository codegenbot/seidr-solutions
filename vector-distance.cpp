#include <vector>
#include <cmath>
using namespace std;

double vector_distance(int n) {
    vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        float x, y;
        cin >> x >> y;
        v1[i] = x; 
        v2[i] = y; 
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += (v2[i] - v1[i]) * (v2[i] - v1[i]);
    }
    
    return sqrt(sum);
}