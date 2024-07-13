#include <cmath>

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    int minutes = hours * 60;
    for (int i = 0; i < minutes; i++) {
        groundSnow += ceil((rateOfSnowFall / 100.0f) * 1.0);
        groundSnow = std::max(0.0f, groundSnow * (1 - proportionMeltingPerHour)); 
    }
    return groundSnow;
}

int main() {
    return snowDay(5, 10.0f, 20.0f, 0.2f);
}