#include <vector>
using namespace std;

double calculateEuclideanDistance(vector<double> v1, vector<double> v2) {
    double distance = 0.0;
    int n = v1.size();
    
    for(int i = 0; i < n; i++) {
        double diff = v1[i] - v2[i];
        distance += pow(diff, 2);
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    
    vector<double> v1(n);
    for(int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    
    vector<double> v2(n);
    for(int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    
    double distance = calculateEuclideanDistance(v1, v2);
    cout << fixed << setprecision(10) << distance << endl;
    
    return 0;
}