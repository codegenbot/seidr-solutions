#include <iostream>
using namespace std;

double snowDay(int hours, float snowOnGround, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = snowOnGround;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - (proportionMeltingPerHour * totalSnow);
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float snowOnGround, rateOfSnowFall, proportionMeltingPerHour;

    cin >> hours >> snowOnGround >> rateOfSnowFall >> proportionMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, snowOnGround, rateOfSnowFall, proportionMeltingPerHour) << endl;

    return 0;
}