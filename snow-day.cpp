float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltRate) {
    float finalSnow = snowOnGround;
    for (int i = 0; i < hours; i++) {
        float snowFall = (snowFallRate - meltRate * finalSnow) * 1;
        finalSnow += snowFall;
    }
    return finalSnow;
}