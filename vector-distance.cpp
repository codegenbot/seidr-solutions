#include <vector>
using namespace std;

double vector_distance(int n) {
    double sum = 0;
    float a[n], b[n];
    
    // Read input from user
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    
    // Calculate Euclidean distance between two vectors
    for (int i = 0; i < n; i++) {
        sum += pow(b[i] - a[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    cout << fixed << setprecision(10) << vector_distance(n) << endl;
    
    return 0;
}