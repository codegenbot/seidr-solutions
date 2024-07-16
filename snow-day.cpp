```cpp
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
    cout << "Enter the initial snow (in feet): ";
    cin >> initialSnow;
    cout << "Enter the rate of snow fall (in feet per hour): ";
    cin >> rateOfSnowFall;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> meltingRate;

    int result = snowAfterHours(hours, initialSnow, rateOfSnowFall, meltingRate);
    cout << "Snow after " << hours << " hours: " << result << endl;
    return 0;
}