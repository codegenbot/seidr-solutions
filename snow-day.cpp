#include <iostream>

int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, melting_rate;
    std::cin >> hours >> snow_on_ground >> snow_fall_rate >> melting_rate;

    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        snow_on_ground -= snow_on_ground * melting_rate;
    }

    std::cout << snow_on_ground << std::endl;

    return 0;
}