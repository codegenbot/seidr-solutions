```cpp
float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    for (int i = 0; i < hours; i++) {
        float accumulation = rateOfSnowFall;
        float melting = accumulation * proportionOfSnowMeltingPerHour;
        initialSnow += accumulation - melting;
    }
    
    return initialSnow;
}