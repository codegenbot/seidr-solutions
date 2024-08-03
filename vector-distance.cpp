#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double x1, x2;
        cin >> x1 >> x2;
        sum += pow(x2 - x1, 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    double result = calculateEuclideanDistance(n);
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}