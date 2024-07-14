#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float snowOnGround, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = snowOnGround;
    
    for (int i = 0; i < hours; i++) {
        snowOnGround += rateOfSnowFall - proportionOfSnowMeltingPerHour * snowOnGround;
        snowOnGround = max<float>(0.0, snowOnGround);
    }
    
    return totalSnow + snowOnGround;
}

int main() {
    int hours;
    cin >> hours;
    float snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> snowOnGround >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, snowOnGround, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    
    return 0;
}