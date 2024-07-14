#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float result = initialSnow;
    for (int i = 0; i < hours; i++) {
        result += rateOfSnowFall - proportionOfSnowMeltingPerHour * result;
    }
    return result;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the initial amount of snow: ";
    cin >> initialSnow;
    cout << "Enter the rate of snow fall (in %): ";
    cin >> rateOfSnowFall;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionOfSnowMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowFall / 100.0f, proportionOfSnowMeltingPerHour);

    cout << "The amount of snow on the ground after " << hours << " hours is: " << result << endl;
    
}