#include <iostream>
#include <cmath>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;

    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_fall = round(snow_fall_rate * 100000) / 100000;
        float snow_melt = round(snow_melt_rate * snow_on_ground * 100000) / 100000;
        snow_on_ground = round((snow_on_ground + snow_fall - snow_melt) * 100000) / 100000;
    }

    std::cout.precision(15);
    std::cout << snow_on_ground << std::endl;

    return 0;
}