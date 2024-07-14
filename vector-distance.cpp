#include <cmath>
#include <iostream>
using namespace std;

double vectorDistance() {
    int n;
    cin >> n; 
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double x1, x2;
        cin >> x1 >> x2; 
        sum += pow(x2 - x1, 2);
    }
    return sqrt(sum);
}

int main() {
    double result = vectorDistance();
    cout << "The Euclidean distance is: " << result << endl;
    return 0;
}