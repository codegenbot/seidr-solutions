float snowDay(int hours, float currentSnow, float rateOfSnowfall, float meltingRate) {
    for (int i = 0; i < hours; ++i) {
        float newSnow = currentSnow + rateOfSnowfall - meltingRate;
        if (newSnow < 0)
            newSnow = 0;
        currentSnow = newSnow;
    }
    
    return currentSnow;
}