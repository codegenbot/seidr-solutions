float snowDay(int hours, float currentSnow, float rateOfSnowfall, float meltingRate) {
    for (int i = 0; i < hours; ++i) {
        currentSnow += min(currentSnow + rateOfSnowfall, max(0.0f, rateOfSnowfall));
        
        if (currentSnow > 0)
            currentSnow -= min(currentSnow, meltingRate);
    }
    
    return currentSnow;
}