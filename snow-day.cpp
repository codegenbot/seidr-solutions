#include <iostream>

int main() {
    float snow_fall_rate, snow_melt_rate, snow_on_ground, snow_fallen;

    std::cout << "Enter snow fall rate: ";
    std::cin >> snow_fall_rate;

    std::cout << "Enter snow melt rate: ";
    std::cin >> snow_melt_rate;

    std::cout << "Enter snow on ground: ";
    std::cin >> snow_on_ground;

    snow_fallen = snow_fall_rate - (snow_melt_rate * snow_on_ground);

    std::cout << "Snow fallen after one hour: " << snow_fallen << std::endl;

    return 0;
}