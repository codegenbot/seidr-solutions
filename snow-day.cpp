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