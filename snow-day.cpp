#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    double totalSnow = 0;
    
    // Add the initial amount of snow
    totalSnow += initialSnow;
    
    for (int i = 1; i <= hours; i++) {
        // Calculate the new amount of snow based on rate of snow fall and melting
        totalSnow += rateOfSnowFall - proportionMeltingPerHour * totalSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionMeltingPerHour;

    cout << fixed << setprecision(6) << snowDay(hours, initialSnow, rateOfSnowFall, proportionMeltingPerHour);

    return 0;
}