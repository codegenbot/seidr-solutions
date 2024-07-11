#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float melt_amount = snow_on_ground * snow_melt_rate;
        snow_on_ground += snow_fall_rate - melt_amount;
    }

    std::cout << std::fixed << snow_on_ground << std::endl;

    return 0;
}