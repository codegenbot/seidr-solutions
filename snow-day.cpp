#include <iostream>

using namespace std;

double snowDay(int h, float g, float r, float m) {
    return g + (h * r - m * h);
}

int main() {
    int hours;
    cin >> hours;
    float ground, rate, melt;
    cin >> ground >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, ground, rate, melt) << endl;
    return 0;
}