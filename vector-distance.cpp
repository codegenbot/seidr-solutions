#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double val1, val2;
        cin >> val1 >> val2;
        sum += pow(val2 - val1, 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << setprecision(10) << calculateEuclideanDistance(n) << endl;
    return 0;
}