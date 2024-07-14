#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; ) {
        double x1, x2;
        cin >> x1 >> x2;
        sum += pow(x2 - x1, 2);
        i++;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
}