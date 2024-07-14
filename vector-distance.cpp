#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    double x1, y1;
    vector<float> vec1(n);
    for (int i = 0; i < n; i++) {
        cin >> x1;
        vec1[i] = x1;
    }
    
    double x2, y2;
    vector<float> vec2(n);
    for (int i = 0; i < n; i++) {
        cin >> x2;
        vec2[i] = x2;
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(vec1[i] - vec2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    cout << fixed << setprecision(10) << vectorDistance(n) << endl;

    return 0;
}