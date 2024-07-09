```c++
#include <iostream>
#include <iomanip>
#include <limits>

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
    
    while (!(cin >> initialSnow) || !(cin >> rateOfSnowFall) || !(cin >> proportionOfSnowMeltingPerHour)) {
        cout << "Invalid input. Please enter valid numbers.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter hours, initial snow, rate of snow fall and proportion of snow melting per hour: ";
        cin >> hours;
        cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;
    }
    
    if (!initialSnow || !rateOfSnowFall || !proportionOfSnowMeltingPerHour) {
        cout << "Invalid input. Please enter valid numbers.\n";
        return 1; 
    }
    
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}