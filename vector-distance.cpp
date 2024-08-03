#include <vector>
using namespace std;

double calculateEuclideanDistance(vector<float> &vector1, vector<float> &vector2) {
    double distance = 0;
    for (int i = 0; i < vector1.size(); i++) {
        distance += pow((vector1[i] - vector2[i]), 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    cout << fixed << setprecision(10) << calculateEuclideanDistance(v1, v2);
    return 0;
}