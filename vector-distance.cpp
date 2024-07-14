#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(int n) {
    double sum = 0;
    float x1[n], x2[n]; // Declare arrays outside the loop

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        sum += pow(x2[i] - x1[i], 2);
    }
    return sqrt(sum); 
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}