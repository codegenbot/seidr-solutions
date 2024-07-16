```c++
#include <iostream>
#include <iomanip>

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    return initialSnow + (rateOfSnowfall * 100) * hours / 100 - (proportionMeltingPerHour * 100) * hours / 100;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;
    std::cin >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    std::cout << " " << std::fixed << std::setprecision(2) << snowDay(hours, initialSnow, (int)(rateOfSnowfall * 100), proportionMeltingPerHour/100.0) << std::endl;
    return 0;
}