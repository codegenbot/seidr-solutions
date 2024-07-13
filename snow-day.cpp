#include <cmath>

float snowDay(int hours, float groundSnow, float rateOfSnowFall, float proportionMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        groundSnow += static_cast<float>(rateOfSnowFall) / 100.0f;
        groundSnow = std::max(0.0f, static_cast<float>(groundSnow) * (1 - proportionMeltingPerHour)); 
    }
    return groundSnow;
}

int main() {
    return snowDay(5, 10.0f, 20.0f, 0.2f);
}