```cpp
float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    float newTotalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        float netChange = rateOfSnowfall - proportionOfMeltingPerHour * newTotalSnow;
        newTotalSnow += netChange;
    }
    return newTotalSnow;
}