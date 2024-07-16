```cpp
#include <iostream>
using namespace std;

float snowAfterHours(int hours, float initialSnow, float rateOfSnowFall, float meltingRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += rateOfSnowFall;
        if (currentSnow > 0)
            currentSnow -= meltingRate;
        else
            currentSnow = 0;
    }
    return currentSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, meltingRate;

    cout << "Enter number of hours: ";
    cin >> hours;
    cout << "Enter initial snow (inches): ";
    cin >> initialSnow;
    cout << "Enter rate of snow fall per hour (inches): ";
    cin >> rateOfSnowFall;
    cout << "Enter melting rate per hour (proportion): ";
    cin >> meltingRate;

    float result = snowAfterHours(hours, initialSnow, rateOfSnowFall, meltingRate);

    cout << "Amount of snow on ground after " << hours << " hours: " << result << " inches.\n";

    return 0;
}