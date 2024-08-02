#include <iostream>
using namespace std;

double snowDay(int hours, float snowOnGround, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double snow = snowOnGround;
    for (int i = 0; i < hours; ++i) {
        snow += rateOfSnowFall - proportionOfSnowMeltingPerHour * snow;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> snowOnGround >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}