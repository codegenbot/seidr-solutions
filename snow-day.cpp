#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melting_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melting_rate;

    for (int i = 0; i < hours; ++i) {
        float remaining_snow = snow_on_ground + snow_fall_rate - snow_on_ground * snow_melting_rate;
        snow_on_ground = remaining_snow + (1 - snow_melting_rate) * (snow_fall_rate - snow_on_ground * snow_melting_rate);
    }

    std::cout << snow_on_ground << std::endl;

    return 0;
}