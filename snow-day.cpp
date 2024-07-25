#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    float snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += rateOfSnowFall - proportionMeltingPerHour * snowOnGround;
    }
    return snowOnGround;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowFall >> proportionMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionMeltingPerHour) << endl;
    return 0;
}