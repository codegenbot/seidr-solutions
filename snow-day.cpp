```cpp
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        if (i == 0) {
            totalSnow += initialSnow;
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
        cout << "Invalid input. Please enter a number for each variable.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter initial snow: ";
        cin >> initialSnow;
        cout << "Enter rate of snow fall: ";
        cin >> rateOfSnowFall;
        cout << "Enter proportion of snow melting per hour: ";
        cin >> proportionOfSnowMeltingPerHour;
    }
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;