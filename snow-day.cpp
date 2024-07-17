#include <iostream>
using namespace std;

double snowDay(int hours, float currentSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow -= totalSnow * proportionOfSnowMeltingPerHour;
    }
    
    return currentSnow + totalSnow;
}

int main() {
    int hours;
    float currentSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> currentSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;

    return 0;
}