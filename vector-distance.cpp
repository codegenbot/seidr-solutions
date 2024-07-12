#include <vector>
#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

double vectorDistance(int n) {
    double sum = 0;
    double val1, val2;
    for (int i = 0; i < n; i++) {
        cin >> val1 >> val2;
        sum += pow(val2 - val1, 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    double val1, val2;
    cin >> val1 >> val2; 
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}