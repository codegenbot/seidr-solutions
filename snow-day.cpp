#include <iostream>
using namespace std;

float snowDay(int hours, float snowOnGround, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - (proportionOfSnowMeltingPerHour * snowOnGround);
        if (totalSnow < 0) {
            totalSnow = 0;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    float snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> snowOnGround >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    return 0;
}