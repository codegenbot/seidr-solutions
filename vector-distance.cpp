#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

double vectorDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double a = 0, b = 0;
        cin >> a >> b;
        sum += pow(b - a, 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}