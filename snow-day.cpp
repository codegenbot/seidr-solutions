#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float total_melt_amount = 0;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        total_melt_amount += snow_on_ground * snow_melt_rate;
    }

    snow_on_ground -= total_melt_amount;

    std::cout << std::fixed << snow_on_ground << std::endl;

    return 0;
}