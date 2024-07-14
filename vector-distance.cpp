#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(int n) {
    double sum = 0;
    double x1, x2; // Declare these variables outside the loop for efficiency

    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        sum += pow(x2 - x1, 2);
    }
    return sqrt(sum); 
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}