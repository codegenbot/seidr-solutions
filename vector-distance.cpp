#include <vector>
#include <iostream>
using namespace std;

double vector_distance(int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        double v1, v2;
        cin >> v1 >> v2;
        sum += (v2 - v1) * (v2 - v1);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(10) << vector_distance(n) << endl;
    return 0;
}