#include <cmath>
float snow_day(int hours, float initial_snow, float rate_of_snowfall, float proportion_of_melting) {
    float current_snow = initial_snow;
    for (int i = 0; i < hours; i++) {
        current_snow += rate_of_snowfall;
        current_snow -= std::floor(current_snow * proportion_of_melting);
    }
    return current_snow;
}
int main() {
float initial_snow = 10.5f;
float rate_of_snowfall = 2.8f;
float proportion_of_melting = 0.7f;
int hours = 24;
float current_snow = snow_day(hours, initial_snow, rate_of_snowfall, proportion_of_melting);
return 0;
}
