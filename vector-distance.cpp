#include <vector>
#include <iostream>

using namespace std;

double vector_distance(int n) {
    float a[n], b[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    
    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        distance += pow(a[i] - b[i], 2);
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vector_distance(n) << endl;
    
    return 0;
}