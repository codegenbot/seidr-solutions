float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    float result = initialSnow;
    for (int i = 0; i < hours; i++) {
        float snowAdded = rateOfSnowFall; 
        float snowMelted = proportionOfSnowMeltingPerHour * result;
        result += snowAdded - snowMelted;
        if(result < 0) {
            result = 0.0f;
        }
    }
    return result;
}