#include <vector>
using namespace std;

double calculateEuclideanDistance(vector<float> vector1, vector<float> vector2) {
    double distance = 0.0;
    
    for(int i=0; i<vector1.size(); i++) {
        float diff = vector1[i] - vector2[i];
        distance += diff * diff;
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for(int i=0; i<n; i++) {
        cin >> v1[i] >> v2[i];
    }

    double result = calculateEuclideanDistance(v1, v2);
    
    printf("%.6f\n", result);
    return 0;
}