#include <iostream>
#include <vector>
using namespace std;

double vectorDistance(vector<double> v1, vector<double> v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    vector<double> v1(n);
    for (double &val : v1) cin >> val;

    vector<double> v2(n);
    for (double &val : v2) cin >> val;

    cout << fixed << setprecision(10) << vectorDistance(v1, v2) << endl;
    
    return 0;
}