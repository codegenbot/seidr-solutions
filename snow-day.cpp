```cpp
#include <iostream>
#include <iomanip>

// Forward declare the function
double snowDay(int, double, double, double);

int main() {
    int hours;
    std::cin >> hours;
    double initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
    std::cin >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}

double snowDay(int hours, double initialSnow, double rateOfSnowFall, double proportionOfSnowMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        initialSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour;
    }
    return initialSnow;
}