#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melting_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melting_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        snow_on_ground -= snow_melting_rate * snow_on_ground;
        if (snow_on_ground < 0.001) {
            snow_on_ground = 0.0;
            break;
        }
    }

    std::cout << snow_on_ground << std::endl;

    return 0;
}