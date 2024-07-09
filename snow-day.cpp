#include <iostream>
#include <iomanip>

using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        if (i == 0) {
            totalSnow = initialSnow;
        } else {
            totalSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour * totalSnow;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    
    if (!(cin >> initialSnow) || !(cin >> rateOfSnowFall) || !(cin >> proportionOfSnowMeltingPerHour)) {
        cout << "Invalid input. Please enter valid numbers.\n";
        return 1; 
    }
    
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}