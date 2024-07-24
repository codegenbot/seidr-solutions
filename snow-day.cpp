#include <iostream>

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double snow = initialSnow;
    for (int i = 0; i < hours; ++i) {
        snow += rateOfSnowfall;
        snow *= (1 - proportionMeltingPerHour);
    }
    return snow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    std::cin >> hours >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);

    std::cout << result << std::endl;

    return 0;
}