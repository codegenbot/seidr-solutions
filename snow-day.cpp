#include <iostream>
using namespace std;

float snowDay(int hours, float snowOnGround, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour * std::max(0.0f, snowOnGround);
        snowOnGround = std::max(0.0f, snowOnGround - (rateOfSnowFall - proportionOfSnowMeltingPerHour * snowOnGround));
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> snowOnGround >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    
    return 0;
}