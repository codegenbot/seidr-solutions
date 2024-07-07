#include <cmath>

float snow_day(int hours, float initial_snow, float rate_of_snowfall, float proportion_of_melting) {
    float current_snow = initial_snow;
    for (int i = 0; i < hours; i++) {
        current_snow += rate_of_snowfall;
        current_snow -= floor(current_snow * proportion_of_melting);
    }
    return current_snow;
}

int main() {
    int hours = 10; // initialize hours with an example value
    float initial_snow = 5.0; // initialize initial_snow with an example value
    float rate_of_snowfall = 2.0; // initialize rate_of_snowfall with an example value
    float proportion_of_melting = 0.5; // initialize proportion_of_melting with an example value
    float current_snow = snow_day(hours, initial_snow, rate_of_snowfall, proportion_of_melting);
    printf("%f\n", current_snow);
    return 0;
}