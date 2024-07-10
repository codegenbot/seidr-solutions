#include <iostream>
#include <algorithm>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        snow_on_ground *= (1.0f - snow_melt_rate); // Consider the proportion of snow melting correctly
    }

    std::cout << snow_on_ground << std::endl;

    return 0;
}