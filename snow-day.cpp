```cpp
int snowAfterHours(int hours, float initialSnow, float rateOfSnowFall, float meltingRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += rateOfSnowFall;
        if (currentSnow > 0) {
            currentSnow -= meltingRate;
        }
    }
    return static_cast<int>(currentSnow);
}