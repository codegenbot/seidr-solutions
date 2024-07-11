#include <vector>
using namespace std;

double vectorDistance(int n) {
    double x1, y1, sum = 0;
    cin >> x1;
    
    for (int i = 0; i < n; i++) {
        cin >> y1;
        sum += pow(y1 - x1, 2);
        x1 = y1;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}