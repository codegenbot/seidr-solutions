#include <iostream>
using namespace std;

double snowDay(int h, double s, double r, double m) {
    return s + r * h - m * h;
}

int main() {
    int hours;
    cin >> hours;
    double initialSnow, rate, meltRate;
    cin >> initialSnow >> rate >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rate, meltRate) << endl;
    return 0;
}