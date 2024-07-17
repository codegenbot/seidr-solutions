```cpp
float snowDay(int hours, float currentSnow, float rateOfSnowfall, float meltingRate) {
    for (int i = 0; i < hours; ++i) {
        currentSnow += std::min(currentSnow + rateOfSnowfall, rateOfSnowfall);
        
        if (currentSnow > 0)
            currentSnow -= std::min(currentSnow, meltingRate);
    }
    
    return currentSnow;
}