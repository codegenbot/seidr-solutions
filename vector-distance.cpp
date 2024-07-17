#include <iostream>
#include <cmath>
using namespace std;

double calculateEuclideanDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double v1Val, v2Val;
        cin >> v1Val >> v2Val;
        sum += pow((v2Val - v1Val), 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << calculateEuclideanDistance(n) << endl;
    return 0;
}