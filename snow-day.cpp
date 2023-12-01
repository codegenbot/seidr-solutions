#include <iostream>

float calculateSnow(float hours, float snow_on_ground, float snow_fall_rate, float snow_melting_rate) {
    for (int i = 0; i < hours; i++) {
        snow_on_ground += snow_fall_rate;
        snow_on_ground -= snow_on_ground * snow_melting_rate;
    }
    return snow_on_ground;
}

int main() {
    float hours, snow_on_ground, snow_fall_rate, snow_melting_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melting_rate;
    std::cout << calculateSnow(hours, snow_on_ground, snow_fall_rate, snow_melting_rate) << std::endl;
    return 0;
}