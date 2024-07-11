#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float meltingRate) {
    double totalSnow = 0;
    for (int i = 1; i <= hours; i++) {
        if (i == 1) {
            totalSnow += initialSnow;
        } else {
            totalSnow += rateOfSnowFall;
        }
        totalSnow -= meltingRate;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, meltingRate;
    cin >> initialSnow >> rateOfSnowFall >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, meltingRate);
    return 0;
}