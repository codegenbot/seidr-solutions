#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Vector {
    float elements[100]; // assuming maximum dimension is 100
};

double vectorDistance(int n) {
    Vector v1, v2;
    
    for (int i = 0; i < n; i++) {
        cin >> v1.elements[i] >> v2.elements[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow((v2.elements[i] - v1.elements[i]), 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
}