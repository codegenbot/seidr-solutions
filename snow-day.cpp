#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_added = snow_fall_rate; // Consider snow_fall_rate for each hour
        float snow_melted = snow_on_ground * snow_melt_rate; // Consider snow_on_ground after snow_added
        snow_on_ground = std::round((snow_on_ground + snow_added - snow_melted) * 1e15) / 1e15; // Precision adjustment
    }

    std::cout << std::fixed << std::setprecision(15) << snow_on_ground << std::endl;

    return 0;
}