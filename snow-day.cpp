#include <iostream>
#include <algorithm>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_added = snow_fall_rate - (snow_on_ground * snow_melt_rate) + snow_fall_rate;
        snow_on_ground += snow_added;
    }

    std::cout.precision(15);
    std::cout << snow_on_ground << std::endl;

    return 0;
}