#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(int n) {
    float v1[20];
    float v2[20];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }

    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    if(n <= 20) {
        cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    } else {
        cout << "Invalid input. The number of dimensions should be less than or equal to 20." << endl;
    }

    return 0;
}