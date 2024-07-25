#include <iostream>
#include <vector>
#include <cmath> 
#include <iomanip>

using namespace std;

double vectorDistance(int n) {
    double x1, y1;
    vector<double> vec1(n), vec2(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i] >> vec2[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double diff = (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
        sum += diff;
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}