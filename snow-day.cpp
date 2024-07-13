#include <algorithm>
#include <cstdio>

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        groundSnow += (rateOfSnowFall / 100.0f); // add new snow
        groundSnow -= groundSnow * proportionMeltingPerHour; // melt existing snow
        groundSnow = std::max(0.0f, groundSnow);
    }
    return groundSnow;
}

int main() {
    int hours = 5; 
    float groundSnow = 10.0f;
    float rateOfSnowFall = 2.0f;
    float proportionMeltingPerHour = 0.1f;

    float result = snowDay(hours, groundSnow, rateOfSnowFall, proportionMeltingPerHour);
    printf("Amount of snow on the ground after %d hours: %.2f\n", hours, result);

    return 0;
}