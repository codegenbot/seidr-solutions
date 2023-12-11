#include <iostream>
using namespace std;
/*
Given an integer representing a number of hours and 3 floats representing how much snow is on the ground, the rate of snow fall, and the proportion of snow melting per hour, return the amount of snow on the ground after the amount of hours given. Each hour is considered a discrete event of adding snow and then melting, not a continuous process.
*/
float getSnowAmount(int hours, float initialSnow, float snowFallRate, float meltPercentage) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate * (1 - meltPercentage);
        currentSnow -= currentSnow * meltPercentage;
    }
    return currentSnow;
}
/*
Given an integer representing a number of hours and 3 floats representing how much snow is on the ground, the rate of snow fall, and the proportion of snow melting per hour, return the amount of snow on the ground after the amount of hours given. Each hour is considered a discrete event of adding snow and then melting, not a continuous process.
*/
int main() {
    int hours;
    float initialSnow, snowFallRate, meltPercentage;
    cin >> hours >> initialSnow >> snowFallRate >> meltPercentage;
    cout << getSnowAmount(hours, initialSnow, snowFallRate, meltPercentage) << endl;
}