#include <iostream>
#include <cstdio>
#include <cmath>

float snow_day(int hours, float initial_snow, float rate_of_snowfall, float proportion_of_melting) {
    float current_snow = initial_snow;
    for (int i = 0; i < hours; i++) {
        current_snow += rate_of_snowfall;
        current_snow -= fmod(current_snow * proportion_of_melting, 1.0f);
    }
    return current_snow;
}

int main() {
    int hours = 10;
    float initial_snow = 5.0f;
    float rate_of_snowfall = 2.0f;
    float proportion_of_melting = 0.5f;
    std::cout << "Snow on the ground after " << hours << " hours: " << snow_day(hours, initial_snow, rate_of_snowfall, proportion_of_melting) << std::endl;
    return 0;
}