#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = 0;
    
    // Calculate the amount of snow that will fall during each hour
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        
        // Calculate how much snow melts per hour and subtract it from the total
        if (proportionOfSnowMeltingPerHour > 0) {
            totalSnow -= initialSnow * proportionOfSnowMeltingPerHour;
            initialSnow = totalSnow; // Update the amount of initial snow for next hour
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    return 0;
}