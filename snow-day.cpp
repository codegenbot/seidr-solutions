#include <iostream>
using namespace std;

double snowDay(int hours, float snowOnGround, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += snowOnGround + rateOfSnowFall - (snowOnGround * proportionOfSnowMeltingPerHour);
        snowOnGround = totalSnow;
    }
    
    return snowOnGround;
}

int main() {
    int hours;
    float snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> snowOnGround >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    double result = snowDay(hours, snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    cout << fixed;
    cout.precision(10);
    cout << result << endl;

    return 0;
}