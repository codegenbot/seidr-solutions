#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melting_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melting_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_fall = snow_fall_rate;
        float snow_melt = snow_on_ground * snow_melting_rate;
        float remaining_snow = snow_on_ground + snow_fall - snow_melt;
        snow_on_ground = remaining_snow >= 0 ? remaining_snow : 0;
    }

    std::cout << std::fixed << std::setprecision(10) << snow_on_ground << std::endl;

    return 0;
}