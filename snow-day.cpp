```c++
float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    float newTotalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        newTotalSnow += rateOfSnowfall - proportionOfMeltingPerHour * newTotalSnow;
    }
    return newTotalSnow;
}