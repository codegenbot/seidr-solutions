#include <iostream>
#include <iomanip>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        double snowfall_amount = snow_fall_rate;
        double melt_amount = snow_on_ground * snow_melt_rate;
        snow_on_ground += snowfall_amount - melt_amount;
    }

    std::cout << std::fixed << std::setprecision(14) << snow_on_ground << std::endl;

    return 0;
}