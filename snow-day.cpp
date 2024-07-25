#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallPerHour, float meltPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallPerHour - meltPerHour * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallPerHour, meltPerHour;
    cin >> initialSnow >> snowFallPerHour >> meltPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallPerHour, meltPerHour) << endl;
    return 0;
}