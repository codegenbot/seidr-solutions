#include <vector>
#include <iostream>

using namespace std;

double euclideanDistance(const vector<float>& v1, const vector<float>& v2) {
    int n = v1.size();
    double sum = 0;
    
    for (int i = 0; i < n; ++i) {
        sum += pow(v1[i] - v2[i], 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }

    double distance = euclideanDistance(v1, v2);

    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}