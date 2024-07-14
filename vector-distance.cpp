#include <vector>
using namespace std;

double calculateEuclideanDistance() {
    int n;
    cin >> n;
    
    vector<float> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    
    vector<float> v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    
    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(distance);
}

int main() {
    cout << fixed << setprecision(10) << calculateEuclideanDistance() << endl;
    return 0;
}