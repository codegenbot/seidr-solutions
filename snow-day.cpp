```cpp
#include <iostream>
#include <iomanip>

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    return initialSnow + (rateOfSnowfall * hours) - proportionMeltingPerHour * hours;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    cout << std::fixed << std::setprecision(2) << std::showpoint << snowDay(hours, initialSnow, (int)(rateOfSnowfall * 100), proportionMeltingPerHour/100.0) << std::endl;
    return 0; }