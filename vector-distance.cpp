#include <vector>
#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

double vectorDistance(int n) {
    double sum = 0;
    vector<double> vec1(n), vec2(n);
    for (int i = 0; i < n; i++) {
        cin >> vec1[i] >> vec2[i];
    }
    for (int i = 0; i < n; i++) {
        sum += pow(vec2[i] - vec1[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}