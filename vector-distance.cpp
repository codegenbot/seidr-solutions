#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double vectorDistance(const vector<float>& x1, const vector<float>& x2) {
    double result = 0;
    size_t n = max(x1.size(), x2.size());
    for (size_t i = 0; i < n; i++) {
        if(i >= x1.size()) x1.push_back(0.0);
        if(i >= x2.size()) x2.push_back(0.0);
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