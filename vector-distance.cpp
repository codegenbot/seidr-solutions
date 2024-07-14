#include <vector>
using namespace std;

double vector_distance(const vector<float>& v1, const vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); ++i) {
        float diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    vector<float> v1(n);
    for (float& f : v1) {
        cin >> f;
    }
    cin >> n;
    vector<float> v2(n);
    for (float& f : v2) {
        cin >> f;
    }
    cout << setprecision(10) << fixed << vector_distance(v1, v2) << endl;
    return 0;
}