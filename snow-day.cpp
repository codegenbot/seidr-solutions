#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rate, float meltRate) {
    return initialSnow + rate * hours - meltRate * hours;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rate, meltRate;
    cin >> initialSnow >> rate >> meltRate;

    double result = snowDay(hours, initialSnow, rate, meltRate);
    cout << fixed << setprecision(9) << result << endl;

    return 0;
}