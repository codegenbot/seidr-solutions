#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double vectorDistance(const vector<float>& x1, const vector<float>& x2) {
    double result = 0;
    int n = max(x1.size(), x2.size());
    for (int i = 0; i < n; i++) {
        double diff = (i >= x1.size() ? 0 : x1[i]) - (i >= x2.size() ? 0 : x2[i]);
        result += pow(diff, 2);
    }
    
    return sqrt(result);
}

int main() {
    vector<float> x1({1.0f, 2.0f});
    vector<float> x2({3.0f, 4.0f});
    double distance = vectorDistance(x1, x2);
    cout << "Euclidean distance: " << fixed << setprecision(5) << distance << endl;
    return 0;
}