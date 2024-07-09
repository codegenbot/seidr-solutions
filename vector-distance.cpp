#include <vector>
using namespace std;

double vectorDistance(int n) {
    float x1[n], x2[n];
    
    // Read input for first vector
    cout << "Enter " << n << " values for the first vector: ";
    for (int i = 0; i < n; i++) {
        cin >> x1[i];
    }
    
    // Read input for second vector
    cout << "\nEnter " << n << " values for the second vector: ";
    for (int i = 0; i < n; i++) {
        cin >> x2[i];
    }
    
    double sum = 0.0;
    
    // Calculate Euclidean distance
    for (int i = 0; i < n; i++) {
        sum += pow(x1[i] - x2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cout << "Enter the number of dimensions: ";
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}