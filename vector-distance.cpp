#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

double vectorDistance() {
    int n;
    cin >> n; // Read n
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double x1, x2;
        cin >> x1 >> x2; // Read each coordinate pair
        sum += pow(x2 - x1, 2);
    }
    return sqrt(sum); 
}

int main() {
    double result = vectorDistance();
    cout << fixed << setprecision(10) << result; 
    return 0;
}