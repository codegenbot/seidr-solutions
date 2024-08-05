#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float snowFallRate, float meltingPerHour) {
    float totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        totalSnow -= totalSnow * meltingPerHour;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltingPerHour;
    cin >> initialSnow >> snowFallRate >> meltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltingPerHour);
    return 0;
}