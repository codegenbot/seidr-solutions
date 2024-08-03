#include <vector>
using namespace std;

double calculateEuclideanDistance(vector<double> &v1, vector<double> &v2) {
    double distance = 0;
    for (int i = 0; i < v1.size(); i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<double> vector1(n), vector2(n);

    for (double &v : vector1) cin >> v;
    for (double &v : vector2) cin >> v;

    double result = calculateEuclideanDistance(vector1, vector2);
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}