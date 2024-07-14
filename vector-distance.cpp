```cpp
#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double vectorDistance(const vector<float>& x1, const vector<float>& x2) {
    double result = 0;
    int n = min(x1.size(), x2.size());
    for (int i = 0; i < n; i++) {
        double diff = x2[i] - x1[i];
        result += pow(diff, 2);
    }
    
    return sqrt(result);
}

int main() {
    vector<float> x1 = {1.0, 2.0};
    vector<float> x2 = {3.0, 4.0};
    double distance = vectorDistance(x1, x2);
    cout << "Euclidean distance: " << fixed << setprecision(5) << distance << endl;
    return 0;
}