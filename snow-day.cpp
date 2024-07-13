#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltPerHour) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        if (meltPerHour > 0.0)
            snow -= meltPerHour * (snow <= 0.0 ? 0.0 : 1.0);
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltPerHour;
    cin >> initialSnow >> rateOfFall >> meltPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltPerHour) << endl;
    return 0;
}