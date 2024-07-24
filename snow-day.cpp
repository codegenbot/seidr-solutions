#include <iostream>

float snowDay(int hours, float snow, float fallRate, float meltRate) {
    return snow + (hours * fallRate) - (hours * meltRate);
}

int main() {
    int h;
    std::cin >> h;
    float s, fr, mr;
    std::cin >> s >> fr >> mr;

    std::cout << std::setprecision(10) << snowDay(h, s, fr, mr) << std::endl;

    return 0;
}