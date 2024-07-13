#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 1; i <= hours; ++i) {
        float snow_added = snow_fall_rate; // add snow only once
        float snow_melted = snow_on_ground * snow_melt_rate; // melt snow amount from current snow_on_ground

        snow_on_ground += snow_added - snow_melted; // update snow on the ground for each hour separately
    }

    // Multiply snow_melted by hours outside the loop for the total amount of snow melted
    snow_on_ground -= snow_melted * hours;

    std::cout << std::fixed << std::setprecision(15) << snow_on_ground << std::endl;

    return 0;
}