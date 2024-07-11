#include <vector>
#include <iostream>
using namespace std;

double vector_distance(int n) {
    double sum = 0;
    float x1[n], x2[n];
    
    // read input for x1 and x2 vectors
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    
    // calculate Euclidean distance between the two vectors
    for (int i = 0; i < n; i++) {
        sum += pow(x2[i] - x1[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vector_distance(n) << endl;
    return 0;
}