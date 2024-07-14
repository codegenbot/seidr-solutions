```
#include <cmath>
#include <vector>
using namespace std;

double vectorDistance(int n, const vector<float>& x1, const vector<float>& x2) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        double diff = x2[i] - x1[i];
        result += pow(diff, 2);
    }
    
    return sqrt(result);