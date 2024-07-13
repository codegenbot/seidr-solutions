#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    for (int i = 1; i <= hours; ++i) {
        float snow_added = snow_fall_rate * (1 - snow_melt_rate); // add snow
        float snow_melted = snow_on_ground; // melt snow

        snow_on_ground += snow_added - snow_melted; // update snow on the ground
    }

    std::cout << std::fixed << std::setprecision(15) << snow_on_ground << std::endl;

    return 0;
}