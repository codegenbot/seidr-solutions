#include <vector>
using namespace std;

double vectorDistance(int n) {
    double sum = 0;
    float a[n], b[n];
    
    // Read input for vector A
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Read input for vector B
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    // Calculate Euclidean distance
    for (int i = 0; i < n; i++) {
        sum += pow(b[i] - a[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    double result = vectorDistance(n);
    
    cout << fixed << setprecision(10) << result << endl;
    
    return 0;
}