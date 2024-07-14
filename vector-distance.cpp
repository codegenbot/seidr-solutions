#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    double x1, y1;
    vector<float> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> x1;
        v1[i] = x1;
    }
    
    double x2, y2;
    cin >> x2;
    for (int i = 0; i < n; i++) {
        cin >> y2;
        v1[i] = pow(v1[i] - y2, 2);
    }
    
    double sum = 0.0;
    for (float f : v1) {
        sum += f;
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}