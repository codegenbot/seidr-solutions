float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float result = initialSnow;
    float snowAdded = rateOfSnowFall / 100.0f;
    for (int i = 0; i < hours; i++) {
        float snowMelted = proportionOfSnowMeltingPerHour * result;
        result += snowAdded - snowMelted;
        if(result < 0) {
            result = 0.0f;
        }
        snowAdded *= rateOfSnowFall / 100.0f;
    }
    return result;
}