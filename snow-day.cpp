#include <iostream>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        double snow_fall_amount = snow_fall_rate;
        double snow_melt_amount = snow_on_ground * (snow_melt_rate / 100);
        snow_on_ground = snow_on_ground + snow_fall_amount - snow_melt_amount;
    }

    std::cout << std::fixed << snow_on_ground << std::endl;

    return 0;
}