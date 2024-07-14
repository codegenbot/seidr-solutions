#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltPerHour) {
    double totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall - meltPerHour;
    }
    return min(initialSnow + rateOfFall * hours, totalSnow);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltPerHour;
    cin >> initialSnow >> rateOfFall >> meltPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltPerHour) << endl;
    return 0;
}