```c++
#include <iostream>
using namespace std;

float snowAfterHours(int hours, float initialSnow, float rateOfSnowFall, float meltingRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += rateOfSnowFall - meltingRate;
    }
    return currentSnow;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;

    float initialSnow, rateOfSnowFall, meltingRate;
    cout << "Enter the initial snow: ";
    cin >> initialSnow;
    cout << "Enter the rate of snow fall: ";
    cin >> rateOfSnowFall;
    cout << "Enter the melting rate per hour: ";
    cin >> meltingRate;

    float result = snowAfterHours(hours, initialSnow, rateOfSnowFall, meltingRate);
    cout << fixed << showpoint;
    cout << "Snow after " << hours << " hours: " << setprecision(2) << result << endl;

    return 0;
}