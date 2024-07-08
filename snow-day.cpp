#include <cstdio>
#include <cmath>

float snow_day(int hours, float initial_snow, float rate_of_snowfall, float proportion_of_melting) {
    float current_snow = initial_snow;
    for (int i = 0; i < hours; i++) {
        current_snow += rate_of_snowfall;
        current_snow -= round(current_snow * proportion_of_melting);
    }
    return current_snow;
}

int main() {
    int hours = 12;
    float initial_snow = 0.5;
    float rate_of_snowfall = 0.3;
    float proportion_of_melting = 0.2;
    printf("Snow on the ground after %d hours: %.2f\n", hours, snow_day(hours, initial_snow, rate_of_snowfall, proportion_of_melting));
}