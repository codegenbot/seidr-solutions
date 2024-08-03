#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melting_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melting_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_fallen = snow_fall_rate - snow_on_ground * snow_melting_rate;
        float remaining_snow = snow_on_ground + (snow_fallen >= 0 ? snow_fallen : 0);
        snow_on_ground = remaining_snow;
        snow_on_ground = round(snow_on_ground * 1e14) / 1e14; // Round to 14 decimal places
    }

    std::cout << std::setprecision(14) << snow_on_ground << std::endl;

    return 0;
}