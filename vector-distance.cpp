#include <vector>
using namespace std;

double vectorDistance(int n) {
    float v1[n];
    float v2[n];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        float x, y;
        cin >> x >> y;
        cout << sqrt(pow(x-y, 2)) << endl;
    } else {
        cout << vectorDistance(n) << endl;
    }

    return 0;
}