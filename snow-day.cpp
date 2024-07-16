#include <iostream>
using namespace std;

int snowAfterHours(int hours, float initialSnow, float rateOfSnowFall, float meltingRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += rateOfSnowFall - meltingRate;
    }
    return static_cast<int>(currentSnow);
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

    int result = snowAfterHours(hours, initialSnow, rateOfSnowFall, meltingRate);
    cout << "Snow after " << hours << " hours: " << result << endl;

    return 0;
}