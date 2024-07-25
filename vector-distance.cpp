#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

double vectorDistance(int n) {
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double x1, y1;
        cin >> x1 >> y1;
        double diff = (x1 - y1) * (x1 - y1);
        sum += diff;
    }
    
    return sqrt(sum); 
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}