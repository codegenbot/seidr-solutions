#include <vector>
#include <cmath>
using namespace std;

double vector_distance(int n) {
    vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        float v1i, v2i;
        cin >> v1i >> v2i;
        v1[i] = v1i; 
        v2[i] = v2i; 
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += (v2[i] - v1[i]) * (v2[i] - v1[i]);
    }
    
    return sqrt(sum);
}