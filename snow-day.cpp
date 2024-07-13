float snowDay(int hours, float initialSnow, float snowFall, float meltRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFall - meltRate;
    }
    return currentSnow;
}