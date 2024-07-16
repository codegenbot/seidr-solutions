#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    snow_on_ground += snow_fall_rate * hours;
    float melt_amount = snow_on_ground * snow_melt_rate;
    snow_on_ground -= melt_amount;

    std::cout << snow_on_ground << std::endl;

    return 0;
}