#include <vector>
#include <iostream>
using namespace std;

double vectorDistance(int n, const vector<float>& vec1, const vector<float>& vec2) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        float diff = vec1[i] - vec2[i];
        sum += diff * diff;
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
    
    cout << fixed << setprecision(10) << vectorDistance(n, vec1, vec2) << endl;
    
    return 0;
}