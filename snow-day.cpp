```c++
float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    float totalSnow = initialSnow;
    for (int i = 0; i < hours; ++i) {
        totalSnow += rateOfSnowfall;
        if (totalSnow > 0.0f)
            totalSnow -= totalSnow * proportionOfMeltingPerHour;
    }
    return totalSnow;
}