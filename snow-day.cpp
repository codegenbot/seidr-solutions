#include <iostream>
using namespace std;

double snowDay(int hours, float snowOnGround, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = 0;
    
    for (int i = 1; i <= hours; i++) {
        if (i == 1) {
            totalSnow = snowOnGround + rateOfSnowFall;
        } else {
            totalSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour * snowOnGround;
        }
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