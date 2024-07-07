#include <cmath>

float snow_day(int hours, float initial_snow, float rate_of_snowfall, float proportion_of_melting) {
    // Your existing implementation here...
}

int main() {
    int hours = 10;
    float initial_snow = 5.0;
    float rate_of_snowfall = 0.2;
    float proportion_of_melting = 0.1;

    float snow_on_ground = snow_day(hours, initial_snow, rate_of_snowfall, proportion_of_melting);
    printf("Snow on ground after %d hours: %.2f\n", hours, snow_on_ground);

    return 0;
}