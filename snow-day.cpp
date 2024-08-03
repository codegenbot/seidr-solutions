#include <iostream>
#include <iomanip>

int main() {
    int hours;
    double snow_on_ground, snow_fall_rate, snow_melting_rate;

    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melting_rate;

    for (int i = 0; i < hours; ++i) {
        double snow_fallen = snow_fall_rate - snow_melting_rate * snow_on_ground;
        double remaining_snow = (snow_fallen > 0) ? snow_on_ground + snow_fallen : snow_on_ground;
        snow_on_ground = remaining_snow;
    }

    std::cout << std::fixed << std::setprecision(15) << snow_on_ground << std::endl;

    return 0;
}