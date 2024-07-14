````
#include <cmath>
#include <iostream>
using namespace std;

double vectorDistance() {
    int n;
    cin >> n; // Read n
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double x1, x2;
        cin >> x1 >> x2;
        sum += pow(x2 - x1, 2);
    }
    return sqrt(sum); 
}

int main() { return vectorDistance(); }