#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

double vectorDistance() {
    int n;
    cin >> n; 
    double sum = 0, x1, x2;
    for (int i = 0; i < n; i++) {
        cin >> x1; 
        cin >> x2; 
        sum += pow(x2 - x1, 2);
    }
    return sqrt(sum); 
}

int main() {
    double result = vectorDistance();
    cout << fixed << setprecision(10) << result; 
    return 0;
}