#include <iostream>
using namespace std;

float calculateSnow(float hours, float currentSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        currentSnow += rateOfSnowFall - currentSnow * proportionOfSnowMeltingPerHour;
    }
    return currentSnow;
}

int main() {
    int hours;
    cin >> hours;
    float currentSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> currentSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    
    cout << fixed << setprecision(8) << calculateSnow(hours, currentSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;

    return 0;
}