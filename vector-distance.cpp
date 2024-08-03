#include <vector>
#include <iostream>

using namespace std;

double vector_distance(vector<float> v1, vector<float> v2) {
    double distance = 0;
    for (int i = 0; i < v1.size(); ++i) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for (float &v : v1) {
        cin >> v;
    }

    vector<float> v2(n);
    for (float &v : v2) {
        cin >> v;
    }

    cout << fixed << setprecision(10) << vector_distance(v1, v2) << endl;

    return 0;
}