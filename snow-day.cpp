#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float snow_melted = 0;
    for (int i = 1; i <= hours; ++i) {
        float snow_added = snow_fall_rate;
        snow_melted += snow_on_ground * snow_melt_rate;
        snow_on_ground += snow_added - snow_on_ground * snow_melt_rate;
    }

    snow_on_ground -= snow_melted * hours;

    std::cout << std::fixed << std::setprecision(15) << snow_on_ground << std::endl;

    return 0;
}