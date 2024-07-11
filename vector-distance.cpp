#include <vector>
using namespace std;

double vectorDistance(int n) {
    float v1[n], v2[n];
    
    // Read first vector
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    
    // Read second vector
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}