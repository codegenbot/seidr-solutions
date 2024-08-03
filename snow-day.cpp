#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melting_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melting_rate;

    for (int i = 0; i < hours; ++i) {
        float snow_fallen = snow_fall_rate - remaining_snow * snow_melting_rate;
        float remaining_snow = snow_on_ground + (snow_fallen >= 0 ? snow_fallen : 0);
        snow_on_ground = remaining_snow;
    }

    std::cout << snow_on_ground << std::endl;

    return 0;
}