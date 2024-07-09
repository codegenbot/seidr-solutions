```
#include <iostream>
#include <iomanip>

using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        if (totalSnow > 0) {
            totalSnow -= totalSnow * proportionOfSnowMeltingPerHour / 100.0f;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    while (!(cin >> initialSnow) || !(cin >> rateOfSnowFall) || !(cin >> proportionOfSnowMeltingPerHour)) {
        cout << "Invalid input. Please enter a number for each prompt." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;