#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;

    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground = snow_on_ground + snow_fall_rate - (snow_melt_rate * snow_on_ground);
        snow_on_ground = static_cast<int>(snow_on_ground * 1e15) / 1e15; // Round to 15 decimal places
    }

    std::cout << std::fixed << std::setprecision(15) << snow_on_ground << std::endl;

    return 0;
}