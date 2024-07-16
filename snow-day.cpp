```cpp
#include <iostream>
#include <iomanip>

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    return initialSnow + (rateOfSnowfall * hours) - proportionMeltingPerHour * hours;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;
    std::cin >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    cout << std::fixed << std::setprecision(2) << snowDay(hours, initialSnow, rateOfSnowfall/100.0f, proportionMeltingPerHour/100.0f) << endl;
    return 0; }