#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float snow_melted = 0; // declare outside the loop

    for (int i = 1; i <= hours; ++i) {
        float snow_added = snow_fall_rate; // add snow only once
        snow_melted += snow_on_ground * snow_melt_rate; // accumulate total snow melted for each hour

        snow_on_ground += snow_added - snow_melted; // update snow on the ground for each hour separately
    }

    std::cout << std::fixed << std::setprecision(15) << snow_on_ground << std::endl;

    return 0;
}