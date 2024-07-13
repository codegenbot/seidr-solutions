#include <cmath>

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        groundSnow += rateOfSnowFall / 100.0f;
        groundSnow -= groundSnow * proportionMeltingPerHour;
        groundSnow = std::max(0.0f, groundSnow);
    }
    return groundSnow;
}

int main() {
    return snowDay(5, 10.0f, 20.0f, 0.2f);
}