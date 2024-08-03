#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melting_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melting_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_added = snow_fall_rate;
        float snow_melted = snow_on_ground * snow_melting_rate;
        float temp_snow = snow_on_ground + snow_added - snow_melted;

        snow_on_ground = temp_snow;
    }

    std::cout << snow_on_ground << std::endl;

    return 0;
}