#include <vector>
using namespace std;

double vector_distance() {
    int n;
    cin >> n;

    vector<float> vec1(n);
    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }

    vector<float> vec2(n);
    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }

    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        distance += pow(vec1[i] - vec2[i], 2);
    }
    distance = sqrt(distance);

    return distance;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cout << fixed << setprecision(10) << vector_distance() << endl;
    }

    return 0;
}