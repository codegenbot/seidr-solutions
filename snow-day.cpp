#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour * groundSnow;
        groundSnow = min(1.0f, totalSnow); // Ensure the amount of snow on the ground does not exceed 1 meter
    }
    
    return groundSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    cin >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}