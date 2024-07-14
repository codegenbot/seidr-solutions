#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(int n) {
    double sum = 0;
    vector<double> x1(n), x2(n);
    
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        double diff = x2[i] - x1[i];
        sum += pow(diff, 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
}