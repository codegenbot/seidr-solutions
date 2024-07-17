float snowDay(int hours, float currentSnow, float rateOfSnowfall, float meltingRate) {
    for (int i = 0; i < hours; ++i) {
        float changeInSnow = rateOfSnowfall - meltingRate;
        if (changeInSnow > 0)
            currentSnow += changeInSnow;
    }
    
    return currentSnow;
}