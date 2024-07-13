float snowDay(int hours, float initialSnow, float snowFall, float meltRate) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += initialSnow + snowFall - meltRate;
        initialSnow = totalSnow;
    }
    return totalSnow;
}