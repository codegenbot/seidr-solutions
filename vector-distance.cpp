#include <cmath>
#include <iostream>
using namespace std;

double vectorDistance() {
    int n;
    cin >> n; 
    double sumOfSquares = 0;
    for (int i = 0; i < n; i++) {
        string x1Str, x2Str;
        cin >> x1Str >> x2Str; 
        double x1 = stod(x1Str);
        double x2 = stod(x2Str); 
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