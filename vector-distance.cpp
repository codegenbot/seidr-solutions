#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Vector {
    float x[];
};

double vectorDistance(int n) {
    Vector v1[n], v2[n];
    
    for (int i = 0; i < n; i++) {
        cin >> v1[i].x[0] >> v2[i].x[0];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow((v2[i].x[0] - v1[i].x[0]), 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
}