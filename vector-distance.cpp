#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

double vectorDistance(const vector<float>& x1, const vector<float>& x2) {
    double result = 0;
    float diff = 0;
    
    int n = max(x1.size(), x2.size());
    
    for (int i = 0; i < n; i++) {
        if(i >= x1.size()) {
            diff = 0 - x2[i];
        } else if(i >= x2.size()) {
            diff = x1[i] - 0;
        } else {
            diff = x1[i] - x2[i];
        }
        
        result += pow(diff, 2);
    }
    
    return sqrt(result);
}

int main() {
    vector<float> x1({30.045858503023396f, 9.379624659900827f, 49.338175658348405f, 52.31539128227732f, -61.22183805383865f, 4.410755481685257f});
    vector<float> x2({-88.3673180506643f, -63.27785390696465f, 36.616477843590246f, -65.14022857021973f, 82.77332951465317f, 74.10168722657949f});
    double distance = vectorDistance(x1, x2);
    cout << "Euclidean distance: " << fixed << setprecision(10) << distance << endl;
    return 0;
}