#include <iostream>
using namespace std;

double snowDay(int hours, float currentSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        if (rateOfSnowFall > 0) {
            totalSnow += rateOfSnowFall;
        }
        
        if (proportionMeltingPerHour > 0 && currentSnow > 0) {
            double amountToMelt = min(currentSnow, rateOfSnowFall / proportionMeltingPerHour);
            totalSnow -= amountToMelt;
            currentSnow -= amountToMelt;
        }
    }
    
    return totalSnow + currentSnow;
}

int main() {
    int hours;
    float currentSnow, rateOfSnowFall, proportionMeltingPerHour;
    
    cin >> hours >> currentSnow >> rateOfSnowFall >> proportionMeltingPerHour;
    
    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, rateOfSnowFall, proportionMeltingPerHour) << endl;
    
    return 0;
}