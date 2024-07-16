#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double vectorDistance(int n) {
    double x1, y1;
    vector<double> vec1(n), vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i] >> vec2[i];
    }
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double diff = (vec1[i] - vec2[i]);
        sum += diff * diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    std::cout << fixed << setprecision(10) << vectorDistance(n) << endl;
    return 0;
}