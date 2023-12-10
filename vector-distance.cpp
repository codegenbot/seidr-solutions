#include <vector>
#include <cmath>
using namespace std;

double vectorDistance(const vector<float>& a, const vector<float>& b) {
    double distance = 0;
    for (int i = 0; i < a.size(); i++) {
        distance += pow(a[i] - b[i], 2);
    }
    return sqrt(distance);
}
