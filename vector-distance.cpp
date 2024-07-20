#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Vector {
    float x;
};

double vectorDistance(int n) {
    Vector v1, v2;
    
    cin >> v1.x;
    for (int i = 1; i < n; i++) {
        cin >> v1.x;
    }
    
    cin >> v2.x;
    for (int i = 1; i < n; i++) {
        cin >> v2.x;
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow((v2.x - v1.x), 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
}