#include <cstdio>
#include <cmath>

float snow_day(int hours, float initial_snow, float rate_of_snowfall, float proportion_of_melting) {
    // ...
}

int main() {
    int hours = 0;
    float initial_snow = 0.0f;
    float rate_of_snowfall = 0.0f;
    float proportion_of_melting = 0.0f;

    scanf("%d%f%f%f", &hours, &initial_snow, &rate_of_snowfall, &proportion_of_melting);

    printf("%.2f\n", snow_day(hours, initial_snow, rate_of_snowfall, proportion_of_melting));

    return 0;
}