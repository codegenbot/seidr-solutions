#include <vector>
using namespace std;

double vectorDistance(int n) {
    vector<float> v1(n);
    cin >> v1[0];
    for (int i = 1; i < n; i++) {
        float x;
        cin >> x;
        v1[i] = x;
    }

    vector<float> v2(n);
    cin >> v2[0];
    for (int i = 1; i < n; i++) {
        float x;
        cin >> x;
        v2[i] = x;
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}