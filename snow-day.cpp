#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float result = initialSnow;
    float snowAdded = rateOfSnowFall / 100.0f;
    for (int i = 0; i < hours; i++) {
        float snowMelted = proportionOfSnowMeltingPerHour * result;
        snowAdded = rateOfSnowFall / 100.0f;
        result += snowAdded - snowMelted;
        if(result < 0) {
            result = 0.0f;
        }
    }
    return result;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    
    float initialSnow;
    cout << "Enter the initial snow on the ground (in inches): ";
    cin >> initialSnow;
    
    float rateOfSnowFall;
    cout << "Enter the rate of snow fall per hour (as a percentage): ";
    cin >> rateOfSnowFall;
    
    float proportionOfSnowMeltingPerHour;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionOfSnowMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    cout << "The amount of snow on the ground after " << hours << " hours is: " << result << endl;
    
    return 0;
}