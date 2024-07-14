#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float snowFallRate, float meltingPerHour) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        if (meltingPerHour > 0.0f)
            totalSnow -= totalSnow * meltingPerHour / 100.0f;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, snowFallRate, meltingPerHour;
    cin >> groundSnow >> snowFallRate >> meltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, snowFallRate, meltingPerHour) << endl;
    return 0;
}