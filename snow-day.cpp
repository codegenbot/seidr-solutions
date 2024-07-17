float snowDay(int hours, float currentSnow, float rateOfSnowfall, float meltingRate) {
    float totalSnow = currentSnow;
    
    for (int i = 0; i < hours; ++i) {
        currentSnow += rateOfSnowfall;
        currentSnow -= meltingRate;
        
        if (currentSnow < 0)
            currentSnow = 0;
    }
    
    return currentSnow;
}