```cpp
#include <cmath>
#include <vector>
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
    vector<float> v1 = {1.0f, 2.0f};
    vector<float> v2 = {3.0f, 4.0f};
    cout << "The distance is: " << vectorDistance(v1, v2) << endl;
    return 0;
}