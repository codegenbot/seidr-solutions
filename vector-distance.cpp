#include <vector>
using namespace std;

double vectorDistance(int n) {
    double x1, y1;
    for (int i = 0; i < n; ++i) {
        cin >> x1 >> y1;
    }
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double diff = (x1 - y1);
        sum += diff * diff;
        cin >> x1 >> y1;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}