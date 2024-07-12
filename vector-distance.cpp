#include <vector>
#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

double vectorDistance() {
    int n;
    cin >> n;

    double sum = 0;
    for (int i = 0; i < n; i++) {
        double val1, val2;
        cin >> val1 >> val2;
        sum += pow(val2 - val1, 2);
    }
    return sqrt(sum);
}

int main() {
    cout << fixed << setprecision(10) << vectorDistance() << endl;
    return 0;
}