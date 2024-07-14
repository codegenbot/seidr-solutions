#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double vectorDistance(const vector<float>& x1, const vector<float>& x2) {
    double diff = 0;
    int n = max(x1.size(), x2.size());
    for (int i = 0; i < n; i++) {
        if(i >= x1.size()) {
            diff += pow(0 - x2[i], 2);
        } else if(i >= x2.size()) {
            diff += pow(x1[i], 2);
        } else {
            double vec1 = x1[i];
            double vec2 = x2[i];
            diff += pow(vec1 - vec2, 2);
        }
    }
    return sqrt(diff);
}

int main() {
    vector<float> x1({1.0f, 2.0f});
    vector<float> x2({3.0f, 4.0f});
    double distance = vectorDistance(x1, x2);
    cout << "Euclidean distance: " << fixed << setprecision(5) << distance << endl;
    return 0;
}