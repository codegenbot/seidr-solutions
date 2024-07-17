#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double x1, x2;
        cin >> x1 >> x2;
        sum += std::pow(x2 - x1, 2);
    }
    return std::sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << std::setprecision(10) << vectorDistance(n) << endl;
    return 0;
}