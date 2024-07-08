#include <cstdio>
#include <cmath>

double snow_day(int hours, double initial_snow, double rate_of_snowfall, double proportion_of_melting) {
    double current_snow = initial_snow;
    for (int i = 0; i < hours; i++) {
        current_snow += rate_of_snowfall;
        current_snow -= fmod(current_snow * proportion_of_melting, 1.0);
    }
    return current_snow;
}