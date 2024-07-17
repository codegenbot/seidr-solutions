```cpp
float snowDay(int hours, float currentSnow, float rateOfSnowfall, float meltingRate) {
    for (int i = 0; i < hours; ++i) {
        currentSnow += rateOfSnowfall;
        if (currentSnow > meltingRate)
            currentSnow -= meltingRate;
        else
            currentSnow -= currentSnow;
    }
    
    return currentSnow;
}