#include <cmath>
#include <iostream>
using namespace std;

double vectorDistance() {
    int n;
    cin >> n; 
    double sumOfSquares = 0;
    for (int i = 0; i < n; i++) {
        double x1, x2;
        cin >> x1 >> x2; 
        double differenceSquared = pow(x2 - x1, 2);
        sumOfSquares += differenceSquared;
    }
    return sqrt(sumOfSquares);
}

int main() {
    double result = vectorDistance();
    cout << "The Euclidean distance is: " << result << endl;
    return 0;
}