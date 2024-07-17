#include <vector>
using namespace std;

double vector_distance() {
    int n;
    cin >> n;
    
    vector<float> v1(n);
    for (float& x : v1) {
        cin >> x;
    }
    
    vector<float> v2(n);
    for (float& x : v2) {
        cin >> x;
    }
    
    double distance = 0.0;
    for (int i = 0; i < n; ++i) {
        distance += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(distance);
}

int main() {
    cout << fixed << setprecision(10);
    double result = vector_distance();
    cout << result << endl;
    return 0;
}