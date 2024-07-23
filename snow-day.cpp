#include <iostream>
#include <iomanip>

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow *= (1 - proportionOfSnowMeltingPerHour);
    }
    return totalSnow;
}

int main() {
    int hours;
    std::cout << "Enter hours: ";
    std::cin >> hours;

    float initialSnow = 0.0f, rateOfSnowFall = 0.0f, proportionOfSnowMeltingPerHour = 0.0f;
    std::cout << "Enter initial snow: ";
    float input = 0.0f;
    std::cin >> input;
    initialSnow = static_cast<float>(input);

    std::cout << "Enter rate of snow fall: ";
    cin >> input;
    rateOfSnowFall = static_cast<float>(input);

    std::cout << "Enter proportion of snow melting per hour: ";
    cin >> input;
    proportionOfSnowMeltingPerHour = static_cast<float>(input);

    std::cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour) << endl;
    return 0;
}