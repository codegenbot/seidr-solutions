#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    double x1, y1;
    cin >> x1 >> y1;
    
    vector<double> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    
    vector<double> v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    if (n == 1) {
        double x1, y1;
        cin >> x1 >> y1;
        
        cout << fixed << setprecision(10) << sqrt(pow(x1 - y1, 2)) << endl;
    } else {
        cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    }
    
    return 0;
}