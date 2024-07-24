#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    float vector1[n], vector2[n];
    
    for (int i = 0; i < n; i++) {
        cin >> vector1[i] >> vector2[i];
    }
    
    double distance = 0.0;
    
    for (int i = 0; i < n; i++) {
        distance += pow((vector2[i] - vector1[i]), 2);
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    
    return 0;
}