float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours - 1; i++) {
        snow += snowFallRate;
        snow -= snow * meltingRate;
    }
    snow += snowFallRate;
    snow -= snow * meltingRate;
    return snow;
}