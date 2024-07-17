float snowDay(int hours, float currentSnow, float rateOfSnowfall, float meltingRate) {
    for (int i = 0; i < hours; ++i) {
        currentSnow += rateOfSnowfall;
        
        if (currentSnow > 0)
            currentSnow -= min(rateOfSnowfall, currentSnow * meltingRate);
    }
    
    return currentSnow;
}