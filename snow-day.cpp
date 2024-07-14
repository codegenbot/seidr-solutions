#include <iostream>
float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float result = initialSnow;
    for (int i = 0; i < hours; i++) {
        result *= (1 + rateOfSnowFall / 100.0f);
        result *= (1 - proportionOfSnowMeltingPerHour);
        if(result < 0) {
            result = 0.0f;
        }
    }
    return result;
}

int main() {
    return snowDay(0, 0.0f, 0.0f, 0.0f);
}